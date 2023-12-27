***Product of Array Except Self***

- - - 

*Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.*

*The product of any prefix or suffix of `nums` is **guaranteed** to fit in a **32-bit** integer.*

*You must write an algorithm that runs in `O(n)` time and without using the division operation.*

- - - 

***Solution***

```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),1);
        int prefix = 1;
        int suffix = 1;
        for(int i=0;i<nums.size();i++){
            res[i] *= prefix;
            prefix *= nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            res[i] *= suffix;
            suffix *= nums[i];
        }
        return res;
    }
};
```

- *To find product of all elements except self in $O(n)$ time (without Brute Force) - need to use Prefix & Postfix Products*
- *Product of all Elements Except Self = Prefix Product * Postfix Product*
- *Initialise a results vector of all 1s (needed to calculations) & set prefix sum and postfix sum to 1 (will = 1 at start and end of array respectively)*
- *The result of the two loops (one from beginning and one from end of array) is that res[i] (initially) 1 is multiplied by it’s prefix product & postfix product - and the prefix and suffix product values are updated as the iteration continues by multiplying with the current value in nums*
- *Once iterated & got all products of prefix & postfix sums - can return results vector*

- - - 

***Compleixity***

- ***Time Complexity:*** $O(n)$
- *Two passes through array - simplifies to* $O(n)$

<br>

- ***Space Complexity:*** $O(n)$
- *Additional Space used for the results vector*