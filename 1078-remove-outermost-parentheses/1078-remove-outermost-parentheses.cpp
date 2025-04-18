class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance  = 0;
        string result;
        for (auto ch : s){
            if(ch == '(') {
                if(balance > 0 )  result += ch;
                balance++;
            }
            else{ 
                balance--; 
                if(balance>0) result += ch;
               
            }
        }
    return result;
    }
};