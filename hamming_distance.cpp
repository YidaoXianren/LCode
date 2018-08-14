class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int> xbin(32);
        vector<int> ybin(32);
        int xtmp = x;
        int ytmp = y;
        int rec=32;
        for(int i=0;i<32;i++){
            xbin[i] = xtmp%2;
            xtmp = xtmp/2;
            ybin[i] = ytmp%2;
            ytmp = ytmp/2;
            if(xtmp==0 && ytmp==0){
                rec = i+1;
                break;
            }
        }
        int hd = 0;
        for (int j=0; j<rec; j++){
            if(xbin[j]!=ybin[j]){
                hd++;
            }
        }
        return hd;
        
    }
};
