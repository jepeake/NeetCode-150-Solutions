***Top K Frequent Elements***

- - - 

*Given an integer array `nums` and an integer `k`, return the `k` most frequent elements. You may return the answer in **any order**.*

- - - 

***Solution***

```cpp
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
```

- *Create a Hash Map (unordered map) to store the frequencies of elements & a vector of integers to store the result*
- *Calculate the frequencies of each element by iterating through nums & incrementing HashMap entry*
- *Convert HashMap into a vector of pairs that can be sorted*
- *Sort the vector of pairs in descending order (highest frequencies first) using a custom comparator in the sort function*
- *Add k highest frequency elements to result vector & return*

- - - 

***Complexity***

- ***Time Complexity:*** $O(n logn)$
- *Building the Hash Table is* $O(n)$
- *Copying to the Vector of Pairs is* $O(n)$
- *Sorting is* $O(nlogn)$
- *Extracting the Top K Elements is* $O(k)$
- *Total Time is* $2O(n) + O(nlogn) + O(k)$
- *Dominated by Sorting Time →* $O(nlogn)$

<br>

- ***Space Complexity:*** $O(n)$
- *Additional Space* $O(n)$ *needed for both the Hash Table & Vector*
- *Additional Space* $O(k)$ *needed for results vector*
- *Total Additional Space $2O(n) + O(k)$*
- → $O(n)$ *dominates*