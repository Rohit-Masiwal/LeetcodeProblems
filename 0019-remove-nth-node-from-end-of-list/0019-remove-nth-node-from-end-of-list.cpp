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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* p=head;
        int count=0;
        while(p){
            p=p->next;
            count++;
        }
        if(count==n) return head->next;
        p=head;
        ListNode* p1;
        int i=0;
        while(i<count-n){
            p1=p;
            p=p->next;
            i++;
        }
        p1->next=p->next;
        return head;
    }
};