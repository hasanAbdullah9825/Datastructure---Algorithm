
#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node
{
    int data;
    Node *next;

};


Node *create_node(int item, Node *next)
{

    Node *new_node= (Node *)malloc(sizeof(Node));

    if(new_node==NULL)
    {
        printf("Error could not create A new Node\n");
    }

    new_node->data=item;
    new_node->next=next;

    return new_node;

}


void print_linked_list(Node *head)
{
    Node *current_node=head;

    while(current_node!=NULL)
    {
        printf("%d ",current_node->data);
        current_node=current_node->next;

    }

    printf("\n");


}



void insert(Node *node, int item){

Node *new_node=create_node(item,node->next);
node->next=new_node;

}


int main(){
    Node *n1,*head,*n2;
    n1=create_node(10,NULL);
    head=n1;
    print_linked_list(head);
    insert(n1,20);
    print_linked_list(head);


}

