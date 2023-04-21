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
    int widthOfBinaryTree(TreeNode* root) {
        long long ans=0;
        if(root==NULL) return 0;
        queue<pair<TreeNode*,int>> qu;
        qu.push({root,0});
        while(!qu.empty()){
            int s=qu.size();
            long long last=qu.back().second, start=qu.front().second;
            for(int i=0;i<s;i++){
                TreeNode* temp=qu.front().first;
                long long ind=qu.front().second;
                qu.pop();
                if(temp->left) qu.push({temp->left,ind*2+1});
                if(temp->right) qu.push({temp->right,ind*2+2});
            }
            ans=max(ans,last-start+1);
        }
        return ans;
    }
};