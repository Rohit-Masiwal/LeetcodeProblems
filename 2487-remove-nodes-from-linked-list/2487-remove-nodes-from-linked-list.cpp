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
    ListNode* removeNodes(ListNode* head) {
        vector<int> res,v;
        ListNode* curr=head;
        while(curr){
            res.push_back(curr->val);
            curr=curr->next;   
        }
        stack<int> st;
        for(auto x:res){
            while(!st.empty() && st.top()<x) st.pop();
            st.push(x);
        }
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        ListNode *p= new ListNode(v[0]),*p1=p;
        for(int i=1;i<v.size();i++){
            p1->next=new ListNode(v[i]);
            p1=p1->next;
        }
        return p;
    }
};