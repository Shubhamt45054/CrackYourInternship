class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* n=head;
        while(n!=NULL){
            if((n->next!=NULL) && (n->val == n->next->val) ){
                n->next=n->next->next;
            }
            else{
                n=n->next;
            }
        }
    return head;
    }
};
