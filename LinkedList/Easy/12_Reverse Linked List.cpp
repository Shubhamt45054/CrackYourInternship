class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        ListNode* nxt;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr->next!=NULL){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        curr->next=prev;
        return curr;
    }
};
