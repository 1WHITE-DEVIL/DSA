class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;
        while(n>0){
            int d = n%10;
            mp[d]++;
            n = n/10;     
        }
        int score = 0;
        for(auto &it :mp){
            score += it.first*it.second;
        }
        return score;
    }
};