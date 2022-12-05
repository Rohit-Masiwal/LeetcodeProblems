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
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr=head;
        int c=0;
        while(ptr){
            c++;
            ptr=ptr->next;
        }
        int a=c/2,i=0;
        ptr=head;
        while(a>i){
            ptr=ptr->next;
            i++;
        }
        return ptr;
    }
};