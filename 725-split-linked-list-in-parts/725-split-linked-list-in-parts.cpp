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
        // ListNode* curr=head;
        // vector<int> v;
        // while(curr){
        //     v.push_back(curr->val);
        //     curr=curr->next;
        // }
        // vector<ListNode*> ans;
        // if(v.size()<k){
        //     for(int i=0;i<k;i++){
        //         //ans.push_back(v[i]);
        //     }
        // }
        // return ans;
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
        // int it =  1;
        // ListNode* curr = NULL ;
        // while(ptr){
        //     if(it == 1){
        //         curr = ptr ;
        //         res.push_back(curr);
        //     }
        //     if(count == it){
        //         ListNode* temp = ptr->next ;
        //         ptr->next = NULL ;
        //         ptr =temp;
        //         it = 1;
        //         continue;
        //     }
        //     it++ ;
        //     ptr = ptr->next ;
        // }
        return res ;
    }
};