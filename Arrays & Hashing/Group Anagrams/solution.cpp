class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> groups;
        for(auto str: strs){
            string s = str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }
        for(auto str: mp) groups.push_back(str.second);
        return groups;
    }
};