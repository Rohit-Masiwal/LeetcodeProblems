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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr=head;
        vector<int> nums;
        while(curr){
            nums.push_back(curr->val);
            curr=curr->next;
        }
        if(nums.size()==0) return head;
        vector<int> b;
        int n=nums.size();
        k=k%n;
        for(int i=n-k;i<n;i++)  b.push_back(nums[i]);
        for(int i=0;i<n-k;i++)  b.push_back(nums[i]);
        ListNode* p=new ListNode(b[0]),*p1=p;
        for(int i=1;i<n;i++){
            p1->next=new ListNode(b[i]);
            p1=p1->next;
        }
        return p;
    }
};