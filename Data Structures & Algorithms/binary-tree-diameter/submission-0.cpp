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
    int maxdepth(TreeNode* root){
        if (!root) return 0;
        return 1 + max(maxdepth(root->right), maxdepth(root->left));
    }
    int dia(TreeNode* root, int& diam){
        if(!root) return 0;
        diam = max(dia(root->right, diam), dia(root->left, diam));
        diam = max(diam, maxdepth(root->right)+ maxdepth(root->left));
        return diam;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diam =0;
        return dia(root, diam);
    }
};
