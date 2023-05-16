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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* p=head;
        vector<int> v;
        while(p){
            v.push_back(p->val);
            p=p->next;
        }
        int n=v.size();
        swap(v[k-1],v[n-k]);
        ListNode* p1=new ListNode(v[0]);
        ListNode* p2=p1;
        for(int i=1;i<n;i++){
            p2->next=new ListNode(v[i]);
            p2=p2->next;
        }
        return p1;
    }
};