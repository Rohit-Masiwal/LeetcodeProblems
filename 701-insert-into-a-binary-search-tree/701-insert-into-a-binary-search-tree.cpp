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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* ptr,*p,*curr=root;
        if(root==NULL) return ptr=new TreeNode(val);
        while(curr!=NULL){
            p=curr;
            //if(val==root->val) return;
            if(val<curr->val)
                curr=curr->left;
            else
                curr=curr->right;
        }
        ptr=new TreeNode(val);
        ptr->right=ptr->left=NULL;
        if(ptr->val<p->val)
            p->left=ptr;
        else
            p->right=ptr;
        
    return root;
    }
};