class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        long long firstScore = 0;
        long long secondScore = 0;
        
        int active = 0; // 0 = first, 1 = second
        
        for (int i = 0; i < nums.size(); i++) {
            
            // Rule 1: odd score → swap
            if (nums[i] % 2 == 1) {
                active ^= 1;
            }
            
            // Rule 2: every 6th game (index 5, 11, 17, ...)
            if (i % 6 == 5) {
                active ^= 1;
            }
            
            // Active player scores
            if (active == 0)
                firstScore += nums[i];
            else
                secondScore += nums[i];
        }
        
        return firstScore - secondScore;

         
    }
};