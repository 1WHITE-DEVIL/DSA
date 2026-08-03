class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans = 1 ;
        for(int i = 0 ; i < nums.size();i++){
            for(int j = i+1 ; j<nums.size() ; j++){
                long long a = nums[i];
                long long b = nums[j];
                long long div = gcd(nums[i],nums[j]);
                long long curr = a * b /(div*div) ;
                ans = max(curr , ans);
            }
        }
        return ans;
    }
};