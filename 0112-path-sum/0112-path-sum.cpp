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
    bool check(TreeNode* root,int temp,vector<int> &v) {
        if(root) {
            temp+=root->val;
            if(root->left==NULL && root->right==NULL) {
                v.push_back(temp);
            }
            check(root->left,temp,v);
            check(root->right,temp,v);
        }
        return 0;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int> v;
        check(root,0,v);
        for(auto x:v) if(x==targetSum) return 1;
        return 0;
    }
};