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
    TreeNode* invertTree(TreeNode* root) {
        invertPair(root);
        return root;
    }

    void invertPair(TreeNode* root){
        if (root == nullptr)
            return;
        invertPair(root->left);
        invertPair(root->right);
        swap(root->left, root->right);
    }

    //int getHeight(TreeNode* root){
    //   if (root == nullptr)
    //      return 0;
    //    int lheight = getHeight(root->left);
    //    int rheight = getHeight(root->right);
    //    return max(lheight, rheight) + 1;
    //}
};
