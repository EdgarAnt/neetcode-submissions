class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_set<int> list;
    for(int x: nums){
        if(list.count(x))return true;
        list.insert(x);
    }

    return false;
    }
};