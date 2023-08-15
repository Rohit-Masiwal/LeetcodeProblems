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
    ListNode* partition(ListNode* head, int x) {
        ListNode* LessNode = new ListNode(0);
        ListNode* HigherNode = new ListNode(0);
        ListNode* less=LessNode, *higher=HigherNode;
        while(head) {
            if(head->val<x){
                less->next=head;
                less=less->next;
            }else{
                higher->next=head;
                higher=higher->next;
            }
            head=head->next;
        }
        less->next=HigherNode->next;
        higher->next=NULL;
        return LessNode->next;
    }
};