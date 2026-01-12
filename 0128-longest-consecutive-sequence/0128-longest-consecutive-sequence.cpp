class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int largest = 0;
        unordered_set<int> set(nums.begin(),nums.end());

        for(int num : set){
            if(set.find(num-1) == set.end()){
                int len = 1;
                while(set.find(num+len) != set.end()){
                    len++;
                }
                largest = max(len , largest);
            }
        }
        return largest;
    }
};