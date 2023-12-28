***Maximum Depth of a Binary Tree***

- - - 

*Given the `root` of a binary tree, return its maximum depth.*

*A binary tree's **maximum depth** is the number of nodes along the longest path from the root node down to the farthest leaf node.*

- - - 

***Solution***

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 
class Solution {
public:
    int maxDepth(TreeNode* root) {
    if(root==NULL) return 0;
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};
```

- ***Recursion***
- *Assume given Max Depth of Left Subtree & Right Subtree*
- *Max Depth of Tree = Max(Max Depth of Left Subtree, Max Depth of Right Subtree) + 1*
- *Recursively Call function to take the maximum out of two depths & add 1*
- *Base Case: Leaf Node → Return Depth as 0*

- - - 

***Complexity***

- ***Time Complexity:*** $O(n)$
- → *traversing all n nodes in the tree*

<br>

- ***Space Complexity:*** $O(h)$
- → *height of recursive call stack = height of tree h*

- - -

