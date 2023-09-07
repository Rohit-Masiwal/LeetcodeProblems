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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* curr=head;
        vector<int> v;
        while(curr) {
            v.push_back(curr->val);
            curr=curr->next;
        }
        reverse(v.begin()+left-1,v.begin()+right);
        ListNode* p1=new ListNode(v[0]), *p2=p1;
        for(int i=1;i<v.size();i++) {
            p2->next=new ListNode(v[i]);
            p2=p2->next;
        }
        return p1;
    }
};