***Groups Anagrams***

- - - 

*Given an array of strings `strs` - group **the anagrams** together. You can return the answer in **any order**.*

*An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase - typically using all the original letters exactly once.*

- - - 

***Solution:***

```cpp
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
```

- *Create an Unordered Map - which uses a string as the key & a vector of strings as the values - used to store the groups of anagrams*
- *For each string in the vector strs - create a copy of the string & sort the copy*
- *Use the sorted copy of each string in the vector as a key to the map - adding the corresponding original string to the sorted key*
- *This creates a key-value pair - with a key which is unique for each anagram (as words corresponding to the same anagram will give the same characters when sorted alphabetically) & a value which contains the set of anagrams corresponding to this unique key*
- *Therefore - grouping all of the same anagrams together in the same map vector value*
- *Once all groups have been added to map - can push all groups to vector of vectors of strings & return*
