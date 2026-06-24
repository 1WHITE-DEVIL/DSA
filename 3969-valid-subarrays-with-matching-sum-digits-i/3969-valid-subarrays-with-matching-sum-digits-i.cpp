class Solution {
public:

     bool check(long long sum,int x){
        int a=sum%10;
        if(a!=x)return false;
        int b=0;
        while(sum>0){
            b=sum%10;
            sum/=10;
        }
        return b==x;
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        int n=nums.size();

        int ans=0;
        long long prevPrefix=0;
        for(int i=0;i<n;i++){
            long long currPerfix = prevPrefix;
            for(int j=i;j<n;j++){
                currPerfix += nums[j];
                long long sum = currPerfix;
                if(i>0)sum-=prevPrefix;
                if(check(sum,x))ans++;
            }

            prevPrefix += nums[i];
        }
        return ans;
    }
};