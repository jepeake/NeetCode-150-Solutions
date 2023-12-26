class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int L=0, R=nums.size()-1;
        while(L<R){
            if(nums[L]+nums[R]>target) R--;
            else if(nums[L]+nums[R]<target) L++;
            else return vector<int>{L+1,R+1};
        }
        return {};
    }
};