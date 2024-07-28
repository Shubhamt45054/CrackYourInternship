class Solution
{
    public:
    Node* rev(Node* slow){
        Node* nxt;
        Node* curr=slow;
        slow=NULL;
        while(curr->next!=NULL){
            nxt=curr->next;
            curr->next=slow;
            slow=curr;
            curr=nxt;
        }
        curr->next=slow;
        
        return curr;
    }
    Node *compute(Node *head)
    { 
        if(head==NULL || head->next==NULL) return head;
        head=rev(head);
        Node* curr=head;
        Node* aage=head->next;
        while(aage!=NULL){
            if(curr->data>aage->data){
                curr->next=aage->next;
            }
            else curr=curr->next;
            
            aage=aage->next;
        }
        head=rev(head);
        return head;
        
    }
    
};
