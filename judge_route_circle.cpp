class Solution {
public:
    bool judgeCircle(string moves) {
        vector<char> vecR;
        vector<char> vecL;
        vector<char> vecU;
        vector<char> vecD;
        for(int i=0; i<moves.size();i++){
            char inp = moves[i];
            switch(inp){
            case 'R':
                vecR.push_back(inp);
                break;
            case 'L':
                vecL.push_back(inp);
                break;
            case 'U':
                vecU.push_back(inp);
                break;
            case 'D':
                vecD.push_back(inp);
                break;
            }
        }
        if((vecR.size()==vecL.size())&&(vecU.size()==vecD.size())){
            return true;
        } else {
            return false;
        }
    }
};
