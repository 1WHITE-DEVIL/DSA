class Solution {
public:
    int rotatedDigits(int n) {
        int count = 0;
        for(int i = 0 ; i <=n ; i++){
            int num = i;
            bool isvalid = true;
            bool hasChange = false;
            while(num >0){
                int digit = num %10;
                if(digit == 3 || digit == 4 || digit == 7){
                    isvalid = false;
                    break;
                }
                if(digit == 2|| digit ==5 || digit ==6 || digit == 9 ){
                    hasChange = true;
                }
                num /=10;
            }
            if(isvalid&&hasChange) count++;
        }
        return count;
    }
};