class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum = 0 , F = 0;
        int n = nums.size();
        for(int i  = 0; i< nums.size() ; i++){
            sum +=nums[i];
            F += i*nums[i];
        }
        int maxi = F;
        for(int i = 1 ; i<nums.size() ; i++){
            F += sum - n * nums[n-i];
            maxi = max(maxi,F);
        }
        return maxi;
    }
};