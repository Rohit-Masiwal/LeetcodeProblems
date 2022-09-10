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
    void inorder(TreeNode*root, int low, int high, int& res){
        if(root!=NULL) {
            inorder(root->left,low,high,res);
            if(low<=root->val && root->val<=high) res+=root->val;
            inorder(root->right,low,high,res);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res=0;
        inorder(root,low,high,res);
        return res;
    }
};