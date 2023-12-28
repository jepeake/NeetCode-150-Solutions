***Container With Most Water***

- - -

*You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `ith` line are `(i, 0)` and `(i, height[i])`.*

*Find two lines that together with the x-axis form a container, such that the container contains the most water.*

*Return the maximum amount of water a container can store.*

***Notice** that you may not slant the container.*

- - - 

***Solution***

```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {
        int v = 0, L = 0, R = height.size()-1;
        while(L<R){
            v = max(v, min(height[L],height[R])*(R-L));
            if(height[L]<height[R]) L++;
            else R--;
       }
       return v;
    }
};
```

- ***Two Pointers***
- *Want to Maximise Volume*
- *Assuming lines i & j with i < j*
- ***Volume of Water in Container = min(height[i], height[j]) * (j-i)***

- *Initialise pointers L & R and volume v*
- *Want to Traverse Array in* $O(n)$ *time & find the maximum volume*
- *While the L pointer is < the R pointer (valid container)*
- *Calculate the Volume as the max of the current volume & volume found so far*
- *Increment/Decrement the smallest of the two lines (if height at L smaller → increment L & if height at R smaller → decrement R) as trying to find maximum volume*
- *Return final v*

- - -

***Complexity***

- ***Time Complexity*** $O(n)$
- → *once traversal through array*

<br>

- ***Space Complexity*** $O(1)$
- *constant additional space for L & R pointers*

- - - 

