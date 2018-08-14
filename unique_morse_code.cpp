class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> output;
        for(int i=0; i<words.size(); i++){
            string tmp = "";
            string currentword = words[i];
            for(int j=0;j<currentword.size();j++){
                tmp += morse[currentword[j] - 'a'];
            }
            output.insert(tmp);
        }
        return output.size();
    }
};
