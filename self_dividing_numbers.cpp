class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> output;
        for(int i=left; i<=right; i++){
            int t = i;
            bool isself = true;
            while(t!=0){
                int r = t%10;
                if ((r==0) || (i%r!=0)){
                    isself = false;
                    break;
                }
                t/=10;
            }
            if (isself==true){
                output.push_back(i);
            }
        }
        return output;
    }
};
