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
    pair<int,int> func(TreeNode* root, int &count) {
        if(!root-> left && !root->right) {
            count+=1;
            return {root->val,1};
        }
        pair<int,int> right={0,0},left={0,0};
        if(root->right) {
            right = func(root->right,count);
        }
        if(root->left) {
            left = func(root->left,count);
        }
        if((right.first+left.first+root->val)/(right.second+left.second+1)==root->val) {
            count+=1;
        }
        return {right.first+left.first+root->val,right.second+left.second+1};
    }
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        func(root,count);
        return count;
    }
};