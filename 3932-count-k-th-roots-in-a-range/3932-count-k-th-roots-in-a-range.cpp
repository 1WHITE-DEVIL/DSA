class Solution {
public:
    int countKthRoots(int l, int r, int k) {
    int count = 0;
    if(k==1) return r-l+1;
    int max_x = (int)pow(r, 1.0/k) + 2;
    
    for (int x = 0; x <= max_x; x++) {
        long long val =1;
        for(int i = 0 ;i<k ; i++){
            val *= x;
        }
        
        if (val>=l && val<=r)  // your condition
            count +=1 ;
    }
    
    return count;   
    }
};