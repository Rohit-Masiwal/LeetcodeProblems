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
    map<string,int> mp;
    vector<TreeNode*> ans;
    string inorder(TreeNode* root){
        if(root==NULL) return "$";
        string left=inorder(root->left);
        string right=inorder(root->right);
        string s = to_string(root->val) +"$"+left+"$"+right;
        if(mp[s]==1){
            ans.push_back(root);
        }
        mp[s]++;
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        inorder(root);
        return ans;
    }
};