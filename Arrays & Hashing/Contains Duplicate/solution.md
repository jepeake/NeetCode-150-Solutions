- - - 

***Contains Duplicate***

- - - 

*Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.*

- - - 

***Solution***

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int& num: nums) map[num]++;
        for(const auto& pair: map) if(pair.second > 1) return true;
        return false;
    }
};
```

- *create a HashMap using unordered map in C++*
- *iterate through each number in nums array & increment the HashMap count for that number*
- *iterate through each pair in the HashMap, if the count > 1, return true (duplicates)*
- *else, return false (no duplicates)

- - - 

