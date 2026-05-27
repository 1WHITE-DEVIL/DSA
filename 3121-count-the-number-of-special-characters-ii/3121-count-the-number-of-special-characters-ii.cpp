class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> last(26, -1), first(26, INT_MAX);

        for(int i = 0; i < word.size(); i++) {
            if(islower(word[i]))
                last[word[i]-'a'] = i;
            else
                first[word[i]-'A'] = min(first[word[i]-'A'], i);
        }

        int ans = 0;

        for(int i = 0; i < 26; i++) {
            if(last[i] != -1 && first[i] != INT_MAX && last[i] < first[i])
                ans++;
        }
        return ans;
    }
};