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