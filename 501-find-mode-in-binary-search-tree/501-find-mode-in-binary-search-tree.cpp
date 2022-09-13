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
    void inorder(TreeNode*root,vector<int>&v){
        if(root!=NULL){
            inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>v,ans;
        inorder(root,v);
        if(v.size()<1) return v;
        map<int,int> mp;
        for(int i=0;i<v.size();i++) mp[v[i]]++;
        int maxx=INT_MIN;
        for(auto x:mp) maxx=max(maxx,x.second);
        for(auto x:mp)  {
            if(x.second==maxx) ans.push_back(x.first);
        }
        return ans;
    }
};