class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_map<int,int> map;
    for(int &x: nums){
        map[x]++;
    }

    for(auto x: map){
        if(x.second!=1){
            return true;
        }
    }

    return false;
    }
};