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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* ptr = head ;
        int length = 0 ;
        while(ptr){
            length++ ;
            ptr = ptr->next ;
        }
        vector<ListNode*> res ;
        int count = length/k ;
        int extra=length-count*k;
        ptr = head ;
        for(int i=1;i<=k;i++) {
            int len = count;
            if(i<=extra) len+=1;
            if(!ptr) {
                res.push_back({});
                continue;
            }
            res.push_back(ptr);
            ListNode* temp;
            while(len--) {
                temp=ptr;
                ptr=ptr->next;
            }
            temp->next=NULL;
        }
        return res;
    }
};