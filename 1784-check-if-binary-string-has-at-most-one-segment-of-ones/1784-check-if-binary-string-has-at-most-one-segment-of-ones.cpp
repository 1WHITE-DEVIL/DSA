class Solution {
public:
    bool checkOnesSegment(string s) {
        string r = s;
        sort(s.rbegin(),s.rend());
        if(s == r) return true;
        else return false;
    }
};