class Solution {
public:
    int add(int x){
        int sum = 0;
        while(x > 0){
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
        int mn = INT_MAX;

        for(int x : nums){
            mn = min(mn, add(x));
        }

        return mn;
    }
};