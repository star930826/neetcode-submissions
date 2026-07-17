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
private:
    bool validate(TreeNode* root, TreeNode* min_node, TreeNode* max_node) {
        if(root == nullptr) return true;
        if(min_node != nullptr && root->val <= min_node->val)return false;
        if(max_node != nullptr && root->val >= max_node->val)return false;

        return validate(root->left,min_node,root)&&validate(root->right, root, max_node);
    }

public:
    bool isValidBST(TreeNode* root) {
        return validate(root, nullptr, nullptr);
    }   
};
