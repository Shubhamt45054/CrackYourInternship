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
    bool isPalindrome(ListNode* head) {
      if(head==NULL || head->next==NULL) return head;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
         ListNode* nxt;
        ListNode* curr=slow->next;
        slow=NULL;
        while(curr->next!=NULL){
            nxt=curr->next;
            curr->next=slow;
            slow=curr;
            curr=nxt;
        }
        curr->next=slow;
        
        bool ans=true;
        while(curr!=NULL){
          if(curr->val!=head->val){
              ans=false;
              break;
        }
        curr=curr->next;
        head=head->next;
        }
        
        return ans;
    }
};
