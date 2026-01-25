class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n<k) return 0;
        int  i = 0 , j = i+k-1;
        int maxi = INT_MAX;
        while(j<n){
            maxi = min(maxi , nums[j]-nums[i]);
            i++;
            j++;
        }
        return maxi;
    }
};