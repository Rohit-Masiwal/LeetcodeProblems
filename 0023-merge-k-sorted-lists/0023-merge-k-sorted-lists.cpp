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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        for(int i=0;i<lists.size();i++){
            ListNode* s=lists[i];
            while(s){
                v.push_back(s->val);
                s=s->next;
            }
        }
        if(v.size()==0) return NULL;
        sort(v.begin(),v.end());
        ListNode* p=new ListNode(v[0]),*p2=p;
        for(int i=1;i<v.size();i++){
            p2->next= new ListNode(v[i]);
            p2=p2->next;
        }
        return p;
    }
};