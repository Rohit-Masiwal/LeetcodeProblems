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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr=head;
        vector<int> v,res;
        while(curr) {
            v.push_back(curr->val);
            curr=curr->next;
        }
        int sum=0;
        for(int i=1;i<v.size();i++) {
            if(v[i]==0) {
                res.push_back(sum);
                sum=0;
            }
            sum+=v[i];
        }
        ListNode* p1=new ListNode(res[0]), *p2=p1;
        for(int i=1;i<res.size();i++) {
            p2->next=new ListNode(res[i]);
            p2=p2->next;
        }
        return p1;
    }
};