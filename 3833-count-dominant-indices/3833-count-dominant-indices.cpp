class Solution {
public:
    int avgNo(vector<int>&nums , int index){
        int avg = 0;
        int sum = 0;
        for(int i = index ; i<nums.size();i++){
            sum += nums[i];
        }
        avg = sum/(nums.size()-index);
        return avg;
    }
    int dominantIndices(vector<int>& nums) {
        int dominant = 0;
        for(int i = 0 ; i<nums.size()-1;i++){
            if(nums[i]>avgNo(nums,i+1)){
                dominant++;
            }
        }
        return dominant;
    }
};