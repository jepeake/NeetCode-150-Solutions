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