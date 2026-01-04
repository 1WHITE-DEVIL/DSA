class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total_sum = 0;
        for(int num : nums){
            int count = 0;
            int sum = 0;
            for(int i = 1 ; i*i<=num ;i++){
                if(num % i == 0){
                    count++;
                    sum = sum + i;
                    if(i*i != num){
                        count++;
                        sum += num/i;
                    }
                }
            }
            if(count == 4){
                total_sum += sum;
            }
        }
        return total_sum;
    }
};