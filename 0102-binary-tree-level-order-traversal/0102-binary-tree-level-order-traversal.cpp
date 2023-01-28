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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            vector<int> v;
            int s=qu.size();
            for(int i=0;i<s;i++){
                TreeNode* curr=qu.front();
                qu.pop();
                if(curr->left!=NULL) qu.push(curr->left);
                if(curr->right!=NULL) qu.push(curr->right);
                v.push_back(curr->val);
            }
            ans.push_back(v);
        }
        return ans;
    }
};