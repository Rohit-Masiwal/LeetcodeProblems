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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> v;
            for(int i=0;i<n;i++) {
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                v.push_back(curr->val);
            }
            sort(v.begin(),v.end());
            ans.push_back(v[v.size()-1]);
        }
        return ans;
    }
};