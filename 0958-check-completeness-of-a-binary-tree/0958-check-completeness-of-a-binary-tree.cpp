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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int f=0;
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(f==1 && curr != NULL) return 0;
            if(curr==NULL) 
            {
                f=1;
                continue;
            }
                q.push(curr->left);
                q.push(curr->right);
        }
        return 1;
    }
};