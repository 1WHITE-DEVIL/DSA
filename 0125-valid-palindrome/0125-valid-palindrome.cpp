class Solution {
private:
    bool valid(char ch) {
        return (ch >= 'a' && ch <= 'z') || 
               (ch >= 'A' && ch <= 'Z') || 
               (ch >= '0' && ch <= '9');
    }

    char toLower(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch; // No need to change lowercase or digits
    }

    bool checkPalindrome(string a) {
        int s = 0;
        int e = a.length() - 1;
        
        while (s < e) {
            if (a[s] != a[e]) {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        // Remove non-alphanumeric characters
        string temp = "";
        for (int j = 0; j < s.length(); j++) {
            if (valid(s[j])) {
                temp.push_back(toLower(s[j]));
            }
        }

        // Check if palindrome
        return checkPalindrome(temp);
    }
};
