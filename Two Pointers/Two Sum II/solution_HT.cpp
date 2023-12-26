class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int comp = target - nums[i];
            if(m.count(comp)) return {m[comp], i+1};
            m[nums[i]] = i+1;
        }
        return {};
    }
};