class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        if(n==3) return nums[0]+nums[1]+nums[2];
        int first = nums[0];
        int minPrefix = nums[1];
        int ans = INT_MAX;

        for (int k = 2; k < n; k++) {
        ans = min(ans, first + minPrefix + nums[k]);
        minPrefix = min(minPrefix, nums[k]);
        }
        
return ans;
    }
};