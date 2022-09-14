/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* tree(vector<int>& v,int left,int right){
        if(left>right) return NULL;
        int mid=(left+right)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=tree(v,left,mid-1);
        root->right=tree(v,mid+1,right);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* curr=head;
        vector<int> nums;
        while(curr){
            nums.push_back(curr->val);
            curr=curr->next;
        }
        if(nums.size()==0) return NULL;
        return tree(nums,0,nums.size()-1);  
    }
};