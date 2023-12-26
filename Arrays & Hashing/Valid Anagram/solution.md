***Valid Anagram***

- - - 

*Given two strings `s` and `t` - return `true` _if_ `t` _is an anagram of_ `s` - and `false` _otherwise_.*

*An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase - typically using all the original letters exactly once.*

- - - 

***Solution 1***

```cpp
class Solution:
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;
        for(char c: s) map[c]++;
        for(char c: t) map[c]--;
        for(auto p:map) if(p.second != 0) return false;
        return true;
    }
};
```

- *Create a HashMap*
- *For each character in string c - increment its frequency in the map*
- *For each character in string t - decrement its frequency in the map*
- *If the two strings have the same characters - all the frequencies will sum to 0*
- *For each pair in the map - check the frequencies - and return false if it is not equal to 0*
- *Otherwise - all the frequencies =0 - and can return true - is an anagram*

<br>

- ***Time Complexity:*** $O(n+m)$
- *Iteration through the string s →* $O(n)$ *with length of string* $n$
- *Iteration through the string t →* $O(m)$ *with length of string* $m$
- *Iteration through map →* $O(k)$ *with* $k$ *unique characters in combined input strings (considered to be less than* $m+n$*)*
- *Total* $O(m+n)$

<br>

- ***Space Complexity:*** $O(k)$
- $k$ *number of unique characters in combined string = size of map*

- - - 

***Solution 2***

```cpp
class Solution { 
public: 
bool isAnagram(string s, string t) { 
	sort(s.begin(), s.end()); 
	sort(t.begin(), t.end()); 
	return s == t; 
	} 
};
```

- *Sort strings s & t in alphabetical order*
- *Once sorted - if the strings s & t are the same - there is an anagram*

<br>

- ***Time Complexity:*** $O(nlogn + mlogm)$
- *Sorting string s →* $O(nlogn)$ *time operation* *(*$n$ *length)*
- *Sorting string t →* $O(mlogm)$ *time operation* *(*$m$ *length)*
- *Comparison takes* $O(m+n)$ *in the worst case (all elements of s compared to all elements of t)*
- → *Sorting Complexity dominates & =* $O(nlogn + mlogm)$

<br>

***Space Complexity:*** $O(1)$
- *Assuming Sorting done in-place - constant additional space needed*




