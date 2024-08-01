
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        cnt=cnt-n;

        if(cnt==0) return head->next;

        temp=head;
        ListNode* prev=head;  
        while(cnt){
            cnt--;
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        return head;
    }
};
