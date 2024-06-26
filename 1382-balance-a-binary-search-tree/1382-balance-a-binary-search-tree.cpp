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
public:vector<TreeNode*>v;
    void inorder(TreeNode* root) {
        if(root) {
            inorder(root->left);
            v.push_back(root);
            inorder(root->right);
        }
    }
    TreeNode* tree(int start, int end) {
        if(start>end) return NULL;
        int mid=(start+end)/2;
        TreeNode* root=v[mid];
        root->left=tree(start,mid-1);
        root->right=tree(mid+1,end);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        int n=v.size();
        root = tree(0,n-1);
        return root;
    }
};