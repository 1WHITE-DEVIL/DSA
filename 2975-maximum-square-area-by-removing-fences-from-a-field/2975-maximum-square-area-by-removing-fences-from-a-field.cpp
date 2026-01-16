class Solution {
public:
    static const int MOD = 1e9 + 7;
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {




        // Step 1: add boundary fences
        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);

        // Step 2: sort fence positions
        sort(hFences.begin(), hFences.end());
        sort(vFences.begin(), vFences.end());

        // Step 3: store all possible horizontal distances
        unordered_set<long long> horizontalDiffs;
        int hs = hFences.size();
        for (int i = 0; i < hs; i++) {
            for (int j = i + 1; j < hs; j++) {
                horizontalDiffs.insert(hFences[j] - hFences[i]);
            }
        }

        // Step 4: find max common distance with vertical diffs
        long long maxSide = -1;
        int vs = vFences.size();
        for (int i = 0; i < vs; i++) {
            for (int j = i + 1; j < vs; j++) {
                long long diff = vFences[j] - vFences[i];
                if (horizontalDiffs.count(diff)) {
                    maxSide = max(maxSide, diff);
                }
            }
        }

        // Step 5: result
        if (maxSide == -1) return -1;
        return (maxSide * maxSide) % MOD;
    }

};