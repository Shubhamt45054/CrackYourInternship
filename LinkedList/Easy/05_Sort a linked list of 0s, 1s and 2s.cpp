void sortList(Node *head) 
{ 
    map<int,int> mp;
    Node* temp;
    while(temp!=NULL){
        mp[temp->val];
        temp=temp->next;
    }
    int i=0;
    while(head!=NULL){
        if(mp[i]==0){
            i++;
        }
        else{
            head->val=i;
            mp[i]--;
            head=head->next;
        }
    }
  
}
