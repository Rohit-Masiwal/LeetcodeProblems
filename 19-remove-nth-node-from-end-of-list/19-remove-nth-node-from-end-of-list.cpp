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
        ListNode* curr=head;
        int count=0;
        while(curr){
            count++;
            curr=curr->next;
        }
        curr=head;
        int trav=count-n;
        if(count==n) return head->next;
        int i=1;
        while(i<trav){
            curr=curr->next;
            i++;
        }
        curr->next=curr->next->next;
        return head;
    }
};