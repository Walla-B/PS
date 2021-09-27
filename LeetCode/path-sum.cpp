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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        
        int valuemargin = targetSum - root->val;
        
        if (valuemargin == 0 && !root->left && !root->right) {
            return true;
        }
        else {
            return hasPathSum(root->left, valuemargin) || hasPathSum(root->right, valuemargin);
        }
    }
};