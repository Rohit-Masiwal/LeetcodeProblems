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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> dq;
        dq.push(root);
        int ans;
        while(!dq.empty()) {
            ans=dq.front()->val;
            int s=dq.size();
            for(int i=0;i<s;i++) {
                TreeNode* curr=dq.front();
                dq.pop();
                if(curr->left) dq.push(curr->left);
                if(curr->right) dq.push(curr->right);
            }
        }
        return ans;
    }
};