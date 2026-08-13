class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for(string x: strs){
            string sword=x;
            sort(sword.begin(),sword.end());
            map[sword].push_back(x);
        }
        vector<vector<string>> result;
        for(auto &x:map){
            result.push_back(x.second);
        }
        return result;
    }
};
