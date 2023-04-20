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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> qu;
        if(root==NULL) return ans;
        qu.push(root);
        int f=0;
        while(!qu.empty()){
            int n=qu.size();
            vector<int> v;
            for(int i=0;i<n;i++){
                TreeNode* temp = qu.front();
                qu.pop();
                if(temp->left != NULL)  qu.push(temp->left);
                if(temp->right != NULL)  qu.push(temp->right);
                v.push_back(temp->val);
            }
            if(f==0){
                ans.push_back(v);
                f=1;
            }
            else{
                reverse(v.begin(),v.end());
                ans.push_back(v);
                f=0;
            }
        }
        return ans;
    }
};