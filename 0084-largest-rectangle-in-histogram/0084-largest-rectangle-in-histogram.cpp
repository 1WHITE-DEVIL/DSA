class Solution {
private:
 vector<int> nextSmallerRight(vector<int>& heights , int n){
    stack<int> s ;
    vector<int>right(n);
    for(int i = n-1 ; i>=0 ; i--){
        while(!s.empty() && heights[s.top()]>=heights[i]){
            s.pop();
        }
        right[i] = (s.empty()) ? n : s.top();
        s.push(i);
    }
    return right;
 }
  vector<int> nextSmallerleft(vector<int>& heights , int n){
    stack<int> s ;
    vector<int>left(n);
    for(int i = 0 ; i<n ; i++){
        while(!s.empty() && heights[s.top()]>=heights[i]){
            s.pop();
        }
        left[i] = (s.empty()) ? -1 : s.top();
        s.push(i);
    }
    return left;
 }
 
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left = nextSmallerleft(heights,n);
        vector<int> right = nextSmallerRight(heights ,n);
        int maxArea = 0;
        for( int i = 0 ; i<n ; i++){
            int width = right[i] - left[i] -1;
            int area = heights[i]*width;
            maxArea = max(maxArea , area);
        }
        return maxArea;
    }
};