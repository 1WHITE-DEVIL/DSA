class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;  // Count the number of decreases
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                count++;  // Found a drop
            }
        }

        // Also check last element with first (to handle circular rotation)
        if (nums[nums.size() - 1] > nums[0]) {
            count++;
        }

        // A valid rotated sorted array should have at most **one** drop
        return count <= 1;
    }
};
