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
     void sum(TreeNode* root,string temp,vector<string> &ans) {
        if(root) {
            temp=char(root->val+97)+temp;
            if(root->left==NULL && root->right==NULL) ans.push_back(temp);
            sum(root->left,temp,ans);
            sum(root->right,temp,ans);
        }
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string> ans;
        sum(root,"",ans);
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};