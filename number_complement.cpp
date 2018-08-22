//Method 1:
class Solution {
public:
    int findComplement(int num) {
        int output=0;
        bool flag = false;
        int largest;
        vector<int> org, res;
        for (int i=31; i>=0; i--){
            if(num & (1<<i)){
                org.push_back(1);
                if(flag==false){
                    largest = i;
                    flag = true;
                }
            } else{
                org.push_back(0);
            }
        }
        
        for (int j=0; j<largest; j++){
            if(org[31 - j]==0){
                res.push_back(1);
            } else{
                res.push_back(0);
            }
        }
        for (int k=res.size()-1;k>=0; k--){
            if(res[k]==1){
                output+=power(2,k);
            }   
        }
        return output;
    }

private:
    int power(int a, int b){
        if(b==0) return 1;
        if(b==1) return a;
        while (b>1){
            a *= 2;
            b--;
        }
        return a;
    }
};


//Method2:
class Solution {
public:
    int findComplement(int num) {
        bool start = false;
        for (int i = 31; i >= 0; --i) {
            if (num & (1 << i)) start = true;
            if (start) num ^= (1 << i);
        }
        return num;
    }
};
