class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        istringstream wrdA(A);
        istringstream wrdB(B);
        vector<string> output;
        unordered_map<string, int> words;
        string word;
        while(wrdA>>word){
            words[word]++;
        }
        while(wrdB>>word){
            words[word]++;
        }
        for(auto iter = words.begin(); iter!=words.end();iter++){
            if(iter->second==1){
                output.push_back(iter->first);
            }
        }
        return output;
    }
};
