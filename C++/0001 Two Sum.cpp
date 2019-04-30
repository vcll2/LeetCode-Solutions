class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashmap;
        for(int i=0;i<nums.size();++i){
            int gap = target - nums[i];
            if(hashmap.find(gap)!=hashmap.end() && hashmap[gap]!=i) return{i,hashmap[gap]};
            hashmap[nums[i]]=i;   // pos
        }
        return {};
    }
};
