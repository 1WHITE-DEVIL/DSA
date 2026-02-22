class Solution {
public:
    bool isDigitorialPermutation(int n) {
        vector<int> valid = {1, 2, 145, 40585};
        
        string s = to_string(n);
        sort(s.begin(), s.end());

        for (int x : valid) {
            string t = to_string(x);
            if (t.length() != s.length()) continue;
            sort(t.begin(), t.end());
            if (t == s) return true;
        }
        return false;       
    }
};