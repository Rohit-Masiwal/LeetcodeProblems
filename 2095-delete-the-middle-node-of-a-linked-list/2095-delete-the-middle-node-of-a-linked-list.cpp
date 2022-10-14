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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL) {
          return NULL;
       }
       if (head->next == NULL) {
          return NULL;
       }
        ListNode* p=head,*p1;
        int count=0;
        while(p){
            count++;
            p=p->next;
        }
        p=head;
        int i=0;
        while(i<count/2){
            p1=p;
            p=p->next;
            i++;
        }
        p1->next=p->next;
        return head;
    }
};