class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> ans;
        for(int i = 0; i<nums.size();i++){
            long long curr = nums[i];
            while(ans.size() && curr == ans.back()){
                ans.pop_back();
                curr *= 2;
            }
            ans.push_back(curr);
        }
        return ans;
    }
};