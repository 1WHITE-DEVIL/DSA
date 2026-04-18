class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int>ans(n);
        for(int i = 0 ;i<n;i++){
            int edge = 0;
            for(int j = 0; j<n ;j++){
                
                edge +=matrix[i][j];
            }
                ans[i] = edge;

        }
        return ans;
    }
};