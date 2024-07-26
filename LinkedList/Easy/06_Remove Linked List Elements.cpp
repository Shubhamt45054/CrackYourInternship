
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
         ListNode* n=head;
         while(n!=NULL && n->val==val) n=n->next;
         head=n;
        while(n!=NULL){
            if((n->next!=NULL) && (n->next->val ==val) ){
                n->next=n->next->next;
            }
            else{
                n=n->next;
            }
        }
    return head;
    }
};
