***Valid Parentheses***

- - - 

*Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'` - determine if the input string is valid.*

*An input string is valid if:*
1. *Open brackets must be closed by the same type of brackets.*
2. *Open brackets must be closed in the correct order.*
3. *Every close bracket has a corresponding open bracket of the same type.*

- - - 

***Solution***

```c++
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        if(s[0] == ')' || s[0] == ']' || s[0] == '}')
            return false;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stack.push(s[i]);
            }
            else if(stack.size()){
                if(stack.top() == '(' && s[i] != ')')
                    return false;
                else if(stack.top() == '[' && s[i] != ']')
                    return false;
                else if(stack.top() == '{' && s[i] != '}')
                    return false;
                stack.pop();
            }
            else{
                return false;
            }
        }
        if(stack.size() > 0){
            return false;
        }
        else{
            return true;
        }
    }
};
```

- *Use a stack of characters to store open brackets in the string*
- *If the first character was a closed bracket - broke the rules → false*
- *Then - iterate through the string s - looking at each character - if it is an open bracket - push it to the stack*
- *Otherwise - if the stack is not empty - check the top of the stack and the closed bracket in the string - if they do not match (not closed in order correctly) then return false*
- *If they do close correctly - pop that open bracket off the stack - and iterate again to the next character in the string*
- *If we get through the string without returning false - check the size of the stack - if its 0 return true (all brackets closed successfully)*

- -  -

***Complexity***

- ***Time Complexity:*** $O(n)$
- *One pass through the string*

<br>

- ***Space Complexity:*** $O(n)$
- *Worst Case - all characters are open brackets*

