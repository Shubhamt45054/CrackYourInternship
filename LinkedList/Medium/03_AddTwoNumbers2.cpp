class Solution {
public:
    ListNode* rev(ListNode* head) {
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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=rev(l1);
        l2=rev(l2);
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* newnode=new ListNode(sum%10);
            temp->next=newnode;
            temp=temp->next;
        }
        dummy=dummy->next;
        dummy=rev(dummy);
        return dummy;
    }
};
