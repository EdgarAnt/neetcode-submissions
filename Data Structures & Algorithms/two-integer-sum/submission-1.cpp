class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int complemento=target-nums[i];
            if(map.find(complemento)!=map.end()){
                return {map[complemento],i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};

