***Longest Substring Without Repeating Characters***

- - - 

*Given a string `s`, find the length of the **longest** **substring** without repeating characters*

- - - 

***Solution***

- *→ sliding window*

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int length = 0, L = 0;
        for(int R=0;R<s.length();R++){
            if(m.count(s[R]) && m[s[R]] >= L){
                L = m[s[R]]+1;
                m[s[R]] = R;
            }
            else{
            m[s[R]] = R;
            length = max(length,R-L+1);
            }
        }
        return length;
    }
};
```

- *Create an HashMap to represent the window*
- *HashMap stores the value & it’s latest index in the string*
- *Initialise the length of the longest substring to 0*
- *Iterate the R pointer to the end of the string*

- *If the value at the R pointer is already in the window (i.e. it is in the HashMap & it’s index is greater than the left pointer)*
- *Move the L pointer to 1 past the index of the repeated value (R+1)*
- *Update the HashMap with the index of the new value added to the window*

- *Otherwise - the value at R pointer is not already in the window*
- *Add it’s index to the HashMap*
- *Update the new length of the longest substring*

- *Return length*

- - - 

***Complexity***

***Time Complexity:***
- $O(n)$
- *One pass through the string*

***Space Complexity:***
- $O(n)$
- *Max. Size of Map = Size of String (no repeating characters in entire string)*

