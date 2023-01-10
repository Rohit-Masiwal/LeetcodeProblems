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
    void preorder(TreeNode* root,vector<int> &v){
        if(root!=NULL){
            v.push_back(root->val);
            if(root->left!=NULL)
                preorder(root->left,v);
            else
                v.push_back(NULL);
            if(root->right!=NULL)
                preorder(root->right,v);
            else
                v.push_back(NULL);
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1,v2;
        preorder(p,v1);
        preorder(q,v2);
        // for(auto x:v1) cout<<x<<" ";
        // cout<<"\n";
        // for(auto x:v2) cout<<x<<" ";
        return v1==v2;
    }
};