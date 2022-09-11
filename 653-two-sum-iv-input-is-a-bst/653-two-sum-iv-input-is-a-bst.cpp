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
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        inorder(root,v);
        for(auto x:v) cout<<x<<" ";
        if(v.size()<=1) return 0;
        for(int i=0;i<v.size();i++){
            for(int j=i;j<v.size();j++){
                if(v[i]+v[j]==k && i!=j) return 1;
            }
        }
        return 0;
    }
};