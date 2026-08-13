class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> phrase;
        vector<char> phrase2;
        for(char c: s)phrase.push_back(c);
        for(char c: t)phrase2.push_back(c);

        sort(phrase.begin(), phrase.end());
        sort(phrase2.begin(), phrase2.end());
        

        if(phrase==phrase2){
            return true;
        }else{
            return false;
        }
        
    }
};
