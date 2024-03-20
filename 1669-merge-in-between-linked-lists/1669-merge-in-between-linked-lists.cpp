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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        vector<int> l1, l2;
        ListNode* curr=list1;
        while(curr) {
            l1.push_back(curr->val);
            curr=curr->next;
        }
        curr=list2;
        while(curr) {
            l2.push_back(curr->val);
            curr=curr->next;
        }
        ListNode*p=new ListNode(l1[0]), *p1=p;
        for(int i=1;i<a;i++) {
            p->next= new ListNode(l1[i]);
            p=p->next;
        }
        for(int i=0;i<l2.size();i++) {
            p->next= new ListNode(l2[i]);
            p=p->next;
        }
        for(int i=b+1;i<l1.size();i++) {
            p->next= new ListNode(l1[i]);
            p=p->next;
        }
        return p1;
    }
};