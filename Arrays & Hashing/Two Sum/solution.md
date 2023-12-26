***Two Sum***

- - - 

*Given an array of integers `nums` and an integer `target` - return _indices of the two numbers such that they add up to `target`_.*

*You may assume that each input would have **_exactly_ one solution** - and you may not use the _same_ element twice.*

*You can return the answer in any order.*

- - - 

***Solution***

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



