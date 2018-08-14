//first solution - runtime:16ms
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int tmp;
        int size1 = A.size();
        int size2 = A[0].size();
        for(int i=0;i<size1;i++){
            for(int j=0;j<size2/2;j++){
                tmp = A[i][j];
                A[i][j] = A[i][size2-j-1];
                A[i][size2-j-1] = tmp;
            }
            for(int k=0;k<size2;k++){
                if(A[i][k]==0){
                    A[i][k] = 1;
                } else{
                    A[i][k] = 0;
                }
            }
        }
        return A;
    }
};


//second solution - runtime: 12ms
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> result;
        vector<int> mid;
        for( int i = 0 ; i < A.size() ; ++ i ){
            for( int j = A[i].size() - 1 ; j >= 0 ; -- j){
                //通过与1异或得到取反，让j从末尾开始实现矩阵行的翻转
                mid.push_back( A[i][j] ^ 1 );
            }
            result.push_back( mid );
            mid.clear();
        }
        return result;
    }
};

//third solution - runtime: 8ms
class Solution 
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) 
    {
        for(vector<int> &vi:A)
        {
            for(int &i:vi)
            	i^=1;
            reverse(vi.begin(),vi.end());
        }
        return A;
    }
};
