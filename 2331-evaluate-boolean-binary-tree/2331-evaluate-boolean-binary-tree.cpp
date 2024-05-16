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
    // void Inorder(TreeNode* root, vector<int> &v) {
    //     if(root){
    //         Inorder(root->left, v);
    //         v.push_back(root->val);
    //         Inorder(root->right, v);
    //     }
    // }
    bool evaluateTree(TreeNode* root) {
        if(!root->left && !root->right) {
            if(root->val) return true;
            return false;
        }
        bool l=evaluateTree(root->left);
        bool r=evaluateTree(root->right);
        if(root->val==2) return l|r;
        return l&r;
    }
};