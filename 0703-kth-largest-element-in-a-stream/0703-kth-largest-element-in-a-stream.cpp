class KthLargest {
public:
    priority_queue<int , vector<int> , greater<int>> mh;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this ->k = k;
        for(int num:nums){
            mh.push(num);
            if(mh.size()>k) mh.pop();
        }
    }
    
    int add(int val) {
        mh.push(val);
        if(mh.size()>k) mh.pop();
        return mh.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */