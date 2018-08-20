class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        string charlist = "abcdefghijklmnopqrstuvwxyz";
        int strsize = S.size();
        int totalval = 0;
        int row = 0;
        int res = 0;
        for(int i=0; i<strsize; i++){
            char cw = S[i];
            int index = 0;
            for(int j=0;j<26;j++){
                if(charlist[j]==cw){
                    index=j;
                    break;
                }
            }
            totalval+=widths[index];
            if(totalval==100){
                row+=1;
                totalval=0;
            } else if(totalval>100){
                row+=1;
                totalval=widths[index];
            }
        }
        row += 1;
        res = totalval;
        vector<int> output;
        output.push_back(row);
        output.push_back(res);
        return output;
    }
};
