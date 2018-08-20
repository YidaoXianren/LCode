//Method 1: 52ms
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int totalnum = nums.size();
        int output=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<totalnum; i+=2){
            output+=nums[i];
        }
        return output;
    }
};

//Method 2: 56ms
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> reftable(20001,0);
        for(int i=0; i<nums.size();i++){
            reftable[nums[i]+10000]++;
        }
        int output = 0;
        int flag = 0;
        for (int i=0; i<20001;){
            if((reftable[i]>0)&&(flag==0)){
                output += i-10000;
                flag = 1;
                reftable[i]--;
            } else if((reftable[i]>0)&&(flag==1)){
                flag = 0;
                reftable[i]--;
            } else i++;
        }
        return output;
    }
};
