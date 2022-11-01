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
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* curr=head;
        vector<int> res;
        while(curr){
            res.push_back(curr->val);
            curr=curr->next;
        }
        vector<int> ans;
        // for(int i=0;i<res.size();i++){
        //     int f=0;
        //     for(int j=i+1;j<res.size();j++){
        //         if(res[i]<res[j]){
        //             ans.push_back(res[j]);
        //             f=1;
        //             break;
        //         }
        //     }
        //     if(f==0) ans.push_back(0);
        // }
        stack<int> st;
        int n=res.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=res[i]) st.pop();
            int r=(!st.empty())? st.top() : 0 ;
            ans.push_back(r);
            st.push(res[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};