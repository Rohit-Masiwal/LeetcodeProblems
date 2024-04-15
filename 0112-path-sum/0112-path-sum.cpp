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
    void check(TreeNode* root,int temp,int t, bool& isTargetMatched) {
        if(root) {
            temp+=root->val;
            if(root->left==NULL && root->right==NULL) {
                if(temp==t) {
                    isTargetMatched=true;
                }
            }
            check(root->left,temp,t, isTargetMatched);
            check(root->right,temp,t, isTargetMatched);
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool isTargetMatched=false;
        check(root,0,targetSum,isTargetMatched);
        return isTargetMatched;
    }
};