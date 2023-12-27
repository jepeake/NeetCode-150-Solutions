***Binary Search***

- - - 

*Given an array of integers `nums` which is sorted in ascending order, and an integer `target`, write a function to search `target` in `nums`. If `target` exists - then return its index. Otherwise - return `-1`.*

*You must write an algorithm with `O(log n)` runtime complexity.*

- - - 

***Solution***

```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
    int L = 0, R = nums.size()-1;
    while (L <= R) {
        int mid = L+(R-L)/2;
        if (target > nums[mid]) L = mid + 1;
        else if (target < nums[mid]) R = mid - 1;
        else return mid;
    }
    return -1;
    }
};
```

- *Standard Binary Search approach*
- *Set L = 0 & R = Last Index in Nums*
- *While L ≤ R → calculate the midpoint of Nums & compare to target*
- *If Target > Mid → Remove Left Half of Array by changing L pointer to mid + 1*
- *If Target < Mid → Remove Right Half of Array by changing R pointer to mid - 1*
- *If Target = Mid - found target & can return mid*
- *If Target not found - return -1*

- - - 

***Complexity***

- ***Time Complexity:*** $O(log(n))$
- *as we are dividing the search space by 2 each time*
- *division by 2 → logn*

<br>

- ***Space Complexity:*** $O(1)$