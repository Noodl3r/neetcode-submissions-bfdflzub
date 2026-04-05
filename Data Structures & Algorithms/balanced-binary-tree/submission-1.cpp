/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        height(root);
        return balanced;
    }
private:
    bool balanced = true;
    int height(TreeNode* node){
        if (!node)
            return 0;
        int lheight = height(node -> left);
        int rheight = height(node -> right);
        if (abs(lheight - rheight) > 1)
            balanced = false;
        return max(lheight , rheight) + 1;
    }
};
