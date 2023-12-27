*Invert Binary Tree*

- - - 

*Given the `root` of a binary tree, invert the tree, and return its root.*

- - - 

*Solution*

```cpp
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
            TreeNode* temp = root->left;
            root->left = root->right;
            root->right = temp;
            invertTree(root->left);
            invertTree(root->right)
            return root;
    }
};
```

- *If the Tree Node passes to the function is NULL → return NULL
- *Store the Left Child in a temporary variable*
- *Set the Left Child to the Right Child*
- *Set the Right Child to the (saved) Left Child*
- *Recursively call the Left & Right Children to Invert the Entire Tree*
- *Return the Root of the Tree*

- - - 

*Complexity*

- *Time Complexity:* $O(n)$
- *Traverse through each node in the Tree to swap it’s children - performing constant operations at each node*

<br>

- *Space Complexity:* $O(h)$
- *Determined by the height h of the tree due to the recursive stack (space used by the recursive stack = h during depth-first traversal)*
- *In the Worst Case (unbalanced tree) - the height can be n - leading to* $O(n)$ *space - or with a balanced tree the height would be logn &* $O(logn)$ *space taken***