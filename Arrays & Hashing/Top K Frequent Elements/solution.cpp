class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> res;
        for(int n: nums) mp[n]++;
        vector<pair<int,int>> v(mp.begin(),mp.end());
        auto compare = [](const pair<int,int>& a, const pair<int,int>& b){
            return a.second > b.second; };
        sort(v.begin(), v.end(), compare);
        for(int i=0;i<k;i++) res.push_back(v[i].first);
        return res;
    }
};