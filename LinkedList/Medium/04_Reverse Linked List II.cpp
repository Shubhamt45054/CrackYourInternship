
class Solution {
public:
    ListNode* reverseBetween(ListNode* n, int left, int right) {
        if(n==NULL || n->next==NULL || left==right){
            return n;
        }
        ListNode* head=n;
     ListNode* nex,*prev=NULL;
       // skip the first left-1 node;
       right=right-left+1;
       left=left-1; 
     while(left-- && n!=NULL){
         prev=n;
         n=n->next;
     }
     ListNode* last=prev;
     ListNode* newend=n;
     
    nex=n->next;
     while(right--&& n!=NULL){
         n->next=prev;
            prev=n;
            n=nex;
         if(nex!=NULL) {
              nex=n->next; 
              }
     }

     if(last!=NULL){
         last->next=prev;
     }
     else{
         head=prev;
     }

     newend->next=n;

     return head;
    }
};
