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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int cnt=0;
        while(!q.empty()) {
            int s=q.size();
            vector<int> v;
            for(int i=0;i<s;i++) {
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                v.push_back(curr->val);
            }
            if(cnt%2==1) {
                for(auto x:v) if(x%2==1) return 0;
                for(int i=0;i<v.size()-1;i++) if(v[i]<=v[i+1]) return 0;
            }else {
                for(auto x:v) if(x%2==0) return 0;
                for(int i=0;i<v.size()-1;i++) if(v[i]>=v[i+1]) return 0;
            }
            cnt++;
        }
        
        return 1;
    }
};