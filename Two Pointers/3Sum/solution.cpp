class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int L = i+1, R = nums.size()-1;
            while(L<R){
                if(nums[L]+nums[R]+nums[i]>0) R--;
                else if(nums[L]+nums[R]+nums[i]<0) L++;
                else{
                    res.push_back({nums[i], nums[L], nums[R]});
                    int tempL = L, tempR = R;
                    while(L < R && nums[L] == nums[tempL]) L++;
                    while(L< R && nums[R] == nums[tempR]) R--;
                }
            }
            while(i<nums.size()-1 && nums[i] == nums[i+1]) i++;
        }
        return res;
    }
};