class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
     sort(arr.begin() , arr.end());

        vector<vector<int>> ans;
        int diff = INT_MAX;

        for (int i = 1; i < arr.size(); i++) {
            int curr = arr[i] - arr[i - 1];

            if (curr < diff) {
                diff = curr;
                ans.clear();
                ans.push_back({arr[i - 1], arr[i]});
            } 
            else if (curr == diff) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }
        return ans;
    }
};

   