/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        //cout<<node->val;
        ListNode *ptr=node->next;
        node->val=ptr->val;
        node->next=ptr->next;
    }
};