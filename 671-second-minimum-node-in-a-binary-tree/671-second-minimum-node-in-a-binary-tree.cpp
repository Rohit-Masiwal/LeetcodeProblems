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
    void inorder(TreeNode* root,vector<int>& v){
        if(root!=NULL){
            inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        map<int,int> mp;
        for(int i=0;i<v.size();i++) mp[v[i]]++;
        vector<int> v1;
        for(auto x:mp) v1.push_back(x.first);
        if(v1.size()<2) return -1;
        //int a;
        //for(auto x:v1) cout<<x<<" ";
        int a=v1[1];
        return a;
    }
};