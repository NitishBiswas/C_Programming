#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
    struct node *head,*newnode,*temp;
    head=NULL;
    int choice;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=temp=newnode;
        }else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to insert another data (0,1)? : ");
        scanf("%d",&choice);
    }while(choice);
        temp=head;
        while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;

    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
