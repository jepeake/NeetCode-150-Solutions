***Two Sum II***

- - - 

*Given a **1-indexed** array of integers `numbers` that is already **sorted in non-decreasing order** - find two numbers such that they add up to a specific `target` number. Let these two numbers be `numbers[index1]` and `numbers[index2]` where `1 <= index1 < index2 <= numbers.length`.*

*Return the indices of the two numbers, `index1` and `index2`, *added by one* as an integer array `[index1, index2]` of length 2.*

*The tests are generated such that there is **exactly one solution**. You **may not** use the same element twice.*

*Your solution must use only constant extra space.*

- - - 

***Solution (Two Pointers)***

```cpp
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
```

- *start L & R pointers at 0 & end of array*
- *calculate the sum at every single position of pointers*
- *if the sum is too large -decrement the R pointer (removing the largest element from the possible values)*
- *if the sum is too small - increment the L pointer (removing the smallest element from the possible values)*

- ***Time Complexity: $O(n)$*
- *Only max. one pass through the array*

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
            if(m.count(comp)) return {m[comp], i+1};
            m[nums[i]] = i+1;
        }
        return {};
    }
};
```

- *Create a Hash Table (unordered map) to store elements & their indices*
- *Iterate through the array - calculating the complement (target - num) & checking if the complement exists in the Hash Table (previous number in the array is the complement)*
- *If the complement exists - found a solution to the problem (as num + complement = target)*
- *Otherwise - add current element nums[i] to Hash Table with index as value & nums[i] as key*
- *Repeat until a solution found or end of array reached*#

- ***Time Complexity: $O(n)$*
- *Only one pass through the array*



