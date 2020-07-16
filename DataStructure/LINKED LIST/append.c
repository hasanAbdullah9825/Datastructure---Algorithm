Node *append(Node *head,int item)
{

    Node *new_node=create_node(item, NULL);

    if(head==NULL)
    {

        return new_node;
    }


    Node *current_node=head;

    while(current_node->next !=NULL)
    {
        current_node=current_node->next;
    }

    current_node->next=new_node;


    return head;

}
