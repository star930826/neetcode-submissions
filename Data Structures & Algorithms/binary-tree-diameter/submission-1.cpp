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
    int max_len=0;
    int getlength(TreeNode* root){
        if(root==nullptr)return 0;
        int right_depth=getlength(root->right);
        int left_depth=getlength(root->left);
        //左右都抓到底算深度
        int sum=right_depth+left_depth;
        //左右相加
        max_len=max(max_len,sum);
        return max(left_depth,right_depth)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        max_len=0;
        getlength(root);
        return max_len;
    }
};
