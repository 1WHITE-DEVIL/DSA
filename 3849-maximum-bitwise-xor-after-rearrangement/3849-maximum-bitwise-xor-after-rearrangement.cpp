class Solution {
public:
    string maximumXor(string s, string t) {
        int n = s.size();
        
        int ones = 0, zeros = 0;
        for(char c : t) {
            if(c == '1') ones++;
            else zeros++;
        }
        
        string result = "";
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') {
                if(ones > 0) {
                    result += '1';
                    ones--;
                } else {
                    result += '0';
                    zeros--;
                }
            } else { // s[i] == '1'
                if(zeros > 0) {
                    result += '1';
                    zeros--;
                } else {
                    result += '0';
                    ones--;
                }
            }
        }
        
        return result;
    }
};