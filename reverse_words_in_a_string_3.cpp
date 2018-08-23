//method1:
class Solution {
public:
    string reverseWords(string s) {
        string res, tmp;
        istringstream is(s);
        while(is >> tmp){
            reverse(tmp.begin(), tmp.end());
            res+=tmp+" ";
        }
        res.pop_back();
        return res;
    }
};

