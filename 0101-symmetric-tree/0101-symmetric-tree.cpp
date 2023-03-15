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
    bool check(TreeNode* l,TreeNode* r){
        if(!l && !r) return 1;
        if((l!=NULL && r==NULL) || (l==NULL && r!=NULL)) return 0;
        if(l->val != r->val) return 0;
        return check(l->right,r->left) && check(l->left,r->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return 1;
        return check(root->left,root->right);
    }

};