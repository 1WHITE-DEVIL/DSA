class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n ,0);

        for(int num :nums){
            for(int j = 0 ; j<n ;j++){
                if(nums[j]>num) arr[arr[j]++];
            }
     
       }
       return arr;
    }
};