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
        if(root==nullptr)return nullptr;
        TreeNode* temp =root->left;
        root->left=root->right;
        root->right=temp;
        //temp存好左節點，左變成牽右，右去牽temp抓好的左
        invertTree(root->left);
        invertTree(root->right);
        //左右子節點繼續往下交換直到樹跑完
        return root;
    }
};
