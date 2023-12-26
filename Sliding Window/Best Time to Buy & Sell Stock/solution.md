***Best Time to Buy & Sell Stock***

- - -

*You are given an array `prices` where `prices[i]` is the price of a given stock on the `ith` day.*

*You want to maximize your profit by choosing a **single day** to buy one stock and choosing a **different day in the future** to sell that stock.*

*Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return `0`.*

- - -

***Solution***

→ *Sliding Window*

```cpp
class Solution {
public:
    int maxProfit(vector<int>& p) {
        int L = 0, m = 0;
        for(int R=0;R<p.size();R++){
            if(p[R]>p[L]) m = max(m, p[R] - p[L]);
            else L = R;
        }
        return m;
    }
};
```

- *Start with the left and right pointers at 0*
- *Expand the window to the right*
- *If the right value is greater than the left value - compute the difference & compare to the current max profit*
- *If the right value is less than the left value - move the L pointer to R (this is the smallest value you can buy the stock for - which is what we want)*
- *Increment R to expand to the right*
- *When we are expanding to the right, we are comparing each value in the future to the smallest value we could purchase for on day L -  if the profit is greater than the profit would could have achieved so far - update the max profit value*

- - - 

***Complexity***

- ***Time Complexity*** $O(n)$
- *One pass through array*

<br>

- ***Space Complexity*** $O(1)$
- *Constant Additional Space for L, R, m*

