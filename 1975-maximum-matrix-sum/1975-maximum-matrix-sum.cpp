class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long total = 0;
        int negCount = 0;
        int minAbs = INT_MAX;

        for (auto &row : matrix) {
            for (int x : row) {
                if (x < 0) negCount++;
                total += llabs(x);
                minAbs = min(minAbs, abs(x));
            }
        }

        // If negatives are odd, one smallest absolute value must stay negative
        if (negCount % 2 == 1) {
            total -= 2LL * minAbs;
        }

        return total; 
    }
};