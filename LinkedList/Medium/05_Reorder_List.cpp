class Solution {
public:

       ListNode* reverseList(ListNode* n) {
        ListNode* nex,*prev;
        prev=NULL;
        nex=n;
        while(n!=NULL){
            nex=n->next;
            n->next=prev;
            prev=n;
            n=nex;
        }
        
        return prev;
    }
    
    
    ListNode* middle(ListNode* head){
                
     
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast !=  NULL && fast -> next != NULL)
        {
          
       slow = slow->next;    
     fast = fast ->next ->next;
            
        }  
        return slow; 
    }
    
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return;
        }
        ListNode* mid=middle(head);
        ListNode* rev=reverseList(mid);
        ListNode* hf=head,*hs,*temp;
        hs=rev;
        while(hf!=NULL && hs!=NULL){
            temp=hf->next;
            hf->next=hs;
            hf=temp;

            temp=hs->next;
            hs->next=hf;
            hs=temp;
        }

        if(hf!=NULL){
            hf->next=NULL;
        }


    }
};
