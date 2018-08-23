class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int idx = 0, max = A[0];
        for(int i=1; i<A.size();i++){
            if((A[i]>max)&&(A[i+1]<A[i])){
                idx = i;
                break;
            } else{
                max = A[i];
            }
        }
        return idx;
    }
};
