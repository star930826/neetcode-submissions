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

 //因為是BST樹，根節點左小右大，所以可以看兩個數字若一個小一個大，那要找的就是目前看得這個節點
 //兩個都比現在小的話那代表他們都在左邊，左邊就會有一個要找的根結點，所以往左子節點下去繼續比較，右側同理

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) return nullptr;

        if(root->val>p->val&&root->val>q->val){
            return lowestCommonAncestor(root->left, p, q);
        }
        else if(root->val<p->val&&root->val<q->val){
            
            return lowestCommonAncestor(root->right, p, q);
        }
        
        return root;
    }
};
