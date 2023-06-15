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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root==NULL) return 1;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int> v;
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                v.push_back(curr->val);
            }
            ans.push_back(v);
        }
        int temp=INT_MIN;
        int maxx=INT_MIN;
        int res=0;
        // for(auto x:ans){
        //     for(auto y:x) cout<<y<<" ";
        //     cout<<"\n";
        // }
        for(int i=0;i<ans.size();i++){
            int sum=0;
            for(int j=0;j<ans[i].size();j++){
                sum+=ans[i][j];
            }
            maxx=max(maxx,sum);
            //cout<<sum<<" "<<maxx<<"\n";
            if(maxx>temp) {
                res=i;
                temp=maxx;
            }
        }
        return res+1;
    }
};