//method 1:
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


//method 2:
class Solution {
    public int peakIndexInMountainArray(int[] A) {
        int i = 0;
        while (A[i] < A[i+1]) i++;
        return i;
    }
}

//method 3:
//binary search
class Solution {
    public int peakIndexInMountainArray(int[] A) {
        int lo = 0, hi = A.length - 1;
        while (lo < hi) {
            int mi = lo + (hi - lo) / 2;
            if (A[mi] < A[mi + 1])
                lo = mi + 1;
            else
                hi = mi;
        }
        return lo;
    }
}
