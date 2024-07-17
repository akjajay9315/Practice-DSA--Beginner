void removeloop(Node* head){
    if(head == NULL){
        return;
    }
    Node *startofloop = getstartingNode(head);
    Node *temp = startofloop;

    while(temp -> next != startofloop){
        temp = temp->next;
    }
    temp -> next = NULL;
}