***Two Sum***

- - - 

*Given an array of integers `nums` and an integer `target` - return indices of the two numbers such that they add up to `target`.*

*You may assume that each input would have **exactly one solution** - and you may not use the same element twice.*

*You can return the answer in any order.*

- - - 

***Solution (Brute Force)***

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if((nums[i] + nums[j]) == target){
                    indices.push_back(i);
                    indices.push_back(j);
                }
            }
        }
        return indices;
    }
};
```

- *Create a new vector to hold to two indices*
- *Iterate through each element in nums → and for each element - loop through each element that follows it*
- *Hence - using two pointer to go through each possible pair in the array*
- *If the numbers sum to the target - add the indices to the array*
- *Return the array*

<br>

- ***Time Complexity:*** $O(n^2)$
- *Outer Loop iterates from first element to second-to-last element & Inner Loop iterates from next elements to last element*

<br>

- ***Space Complexity:*** $O(1)$
- *Constant additional storage for indices & i & j*

- - - 

***Solution (Hash Table)***

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int comp = target - nums[i];
            if(m.count(comp)) return {m[comp], i};
            m[nums[i]] = i;
        }
        return {};
    }
};
```

- *Create a Hash Table (unordered map) to store elements & their indices*
- *Iterate through the array - calculating the complement (target - num) & checking if the complement exists in the Hash Table (previous number in the array is the complement)*
- *If the complement exists - found a solution to the problem (as num + complement = target)*
- *Otherwise - add current element nums[i] to Hash Table with index as value & nums[i] as key*
- *Repeat until a solution found or end of array reached*

<br>

- ***Time Complexity:*** $O(n)$
- *Only one pass through the array*

<br>

- ***Space Complexity:*** $O(1)$
- *Constant additional storage for indices & i & j*




