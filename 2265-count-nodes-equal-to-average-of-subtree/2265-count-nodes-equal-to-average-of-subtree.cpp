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
    int c=0;
    pair<int,int> func(TreeNode* root) {
        if(!root-> left && !root->right) {
            c+=1;
            return {root->val,1};
        }
        pair<int,int> right={0,0},left={0,0};
        if(root->right) {
            right = func(root->right);
        }
        if(root->left) {
            left = func(root->left);
        }
        if((right.first+left.first+root->val)/(right.second+left.second+1)==root->val) {
            c+=1;
        }
        return {right.first+left.first+root->val,right.second+left.second+1};
    }
    int averageOfSubtree(TreeNode* root) {
        func(root);
        return c;
    }
};