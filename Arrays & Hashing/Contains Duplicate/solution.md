***Contains Duplicate***

- - - 

*Given an integer array `nums` - return `true` if any value appears **at least twice** in the array - and return `false` if every element is distinct.*

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

- *Create a HashMap using unordered map in C++*
- *Iterate through each number in nums array & increment the HashMap count for that number*
- *Iterate through each pair in the HashMap - if the count > 1 - return true (duplicates)*
- *Else - return false (no duplicates)*

- - - 

 ***Complexity:***

- ***Time Complexity:***
- $O(n)$
- *Iterate through array once & Iterate through map once (2n → simplifies to n) (assuming hash map operations take constant time)*

<br>

- ***Space Complexity:***
- $O(n)$
- *No Duplicates - Hash Map contains entry for each element with count 1*
