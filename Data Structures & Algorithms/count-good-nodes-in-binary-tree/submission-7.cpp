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
    void ct(int& count, TreeNode* node, int path_max){
        cout << path_max <<" ";

        if (node->left){
            if (node->left->val >= path_max){
                count++;
                ct(count, node->left, node->left->val);          
            }else ct(count, node->left, path_max);
        
        }if (node->right){
            if (node->right->val >= path_max) {
                count++;
                ct(count, node->right, node->right->val);         
            }else ct(count, node->right, path_max);
        }  
    }
    int goodNodes(TreeNode* root) {
        int count = 0,  path_max = root->val;
        if (root) ct(count=1, root, path_max);
        return count;
    }
};
