class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int len = grid[0].size();
        int a = len * len;
        int zerocounter = 0;
        for (int m=0; m<len; m++){
            for (int n=0; n<len; n++){
                if(grid[m][n]==0){
                    zerocounter+=1;
                }
            }
        }
        a -= zerocounter;
        
        int tmpmax = 0;
        for (int i=0; i<len; i++){
            tmpmax = grid[i][0];
            for(int j=1;j<len;j++){
                if(grid[i][j]>tmpmax){
                    tmpmax = grid[i][j];
                }
            }
            a += tmpmax;
        }

        for (int j=0; j<len;j++){
            int tmpmax = grid[0][j];
            for(int i=1; i<len;i++){
                if(grid[i][j]>tmpmax){
                    tmpmax = grid[i][j];
                }
            }
            a += tmpmax;
        }
        
        return a;
    }
};
