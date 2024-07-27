/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        ListNode *temp1=head1;
        ListNode *temp2=head2;
        int a=1;
        int b=1;
        while(temp1->next!=NULL) a++,temp1=temp1->next;
        while(temp2->next!=NULL) b++,temp2=temp2->next;

        if(temp1->val!=temp2->val) return NULL;
        while(a!=b){
            if(a>b) a--,head1=head1->next;
            else b--,head2=head2->next;
        }
        while(temp1){
            if(head1==head2) return head1;
            head1=head1->next;
            head2=head2->next;
        }


        return head1;
    }
};
