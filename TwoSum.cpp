class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> map;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int t = target - nums[i];
            if(map.count(t)){
                return {map[t], i};
            }
            map[nums[i]] = i;
        }

        return {};
    }
};
