***Valid Palindrome***

- - - 

*A phrase is a **palindrome** if - after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters -  it reads the same forward and backward. Alphanumeric characters include letters and numbers.*

*Given a string `s` - return `true` if it is a **palindrome** - or `false` otherwise.*

- - - 

***Solution***

```cpp
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() <= 1) return true;
        int start=0;
        int end=s.size()-1; 
        while(start<end){
            while(start<end && !isalnum(s[start])) start++;
            while(start<end && !isalnum(s[end])) end--;
            if(start<end && tolower(s[start])!=tolower(s[end])) return false;
            start++;
            end--;
        }
        return true;
    }
};
```

- *If length is less than or equal to 1 - must be a palindrome → return true*
- *Set the start character at 0 & the end character at size-1*
- *Iterate through the string - incrementing the start pointer & decrementing the end pointer -  ignoring all non-alphanumeric characters - and return false if the start and end pointers do not equal each other*
- *If you can get all of the way through the string with the start and end pointers being equal (until they meet) → return true*

- - - 

***Complexity***

- ***Time Complexity:*** $O(n)$
- Single Pass through array

<br>

- ***Space Complexity:*** $O(1)$
- Constant additional space for start & end variables
