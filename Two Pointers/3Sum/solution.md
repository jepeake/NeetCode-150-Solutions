3Sum***

- - - 

*Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.*

*Notice that the solution set must not contain duplicate triplets.*

- - - 

***Solution***

```cpp
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
```

- *To solve - fix one of the number in the array & solve the TwoSum problem for the remaining numbers (using Two Pointer approach to find TwoSum of a sorted array)* 

- *Initialise a Vector of Vectors to store the result*
- *Sort the nums array (to give intuition of when to increment/decrement L/R)*
- *Fixing one number in the array at a time (outer loop) - set L to the next element & R to the last element in the array*
- *If the 3Sum is > 0 - Decrement R (Removing the Largest Number from consideration - need to decrease sum)*
- *If the 3Sum is <0 - Increment L (Removing the Smallest Number from consideration - need to increase sum)*
- *If the 3Sum = 0 - add the resulting elements to the results array & need to deal with L & R*
- *To deal with L & R - copy their values - and increment/decrement their values while they remain the same as the original value (thus avoiding adding duplicate triplets to the results array)*
- *In addition - if at any point during traversal through array & fixing numbers - if a number is repeated - increment the i pointer over that repeated number - again avoiding duplicate triplets*
- *Fix values one by one in the array & solve the 2Sum - until all triplets found & return result*

- - - 

***Complexity***

***Time Complexity:***
- *Sorting the array →* $O(nlogn)$
- *Nested Loop →* $O(n^2)$ - *traversing the array once for each element in the array*
- → $O(n^2)$ ***dominates***

***Time Complexity:***
- $O(1)$
- → *constant space added for pointers*

- - -
