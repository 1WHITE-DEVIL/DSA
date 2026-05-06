class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        const int r=boxGrid.size(), c=boxGrid[0].size();
        vector<vector<char>> rotate(c, vector<char>(r, '.'));
        for(int i=0; i<r; i++){
            int bottom=c-1;
            for(int j=c-1; j>=0; j--){
                switch (boxGrid[i][j])
                {
                case '#':
                    rotate[bottom][r-1-i]='#';
                    bottom--;
                    break;
                case '*':
                    rotate[j][r-1-i]='*';
                    bottom=j-1;
                    break;
                }
            }
        }
        return rotate; 
    }
};