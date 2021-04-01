#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;

main()
{
    printf("Implementation Of A Linked List\n\n");
    int choice,insert;
    head = NULL;
    do{
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=temp=newnode;
        }else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue (0/1) : ");
        scanf("%d",&choice);
    }while(choice);

    printf("\nLinked List : ");
    display();
    printf("\n\nEnter 1 for Insert a number at the beginning ");
    printf("\nEnter 2 for Insert a number at the given position ");
    printf("\nEnter 3 for Insert a number at the end ");
    printf("\nEnter your choice : ");
    scanf("%d",&insert);
    switch(insert){
        case 1:
            printf("\n\nInsert At Beginning :\n\n");
            inserting_At_Beginning();
            printf("\n\nLinked List : ");
            display();
            break;
        case 2:
            printf("\n\nInsert After Given Position :\n");
            inserting_After_Given_Position();
            printf("\n\nLinked List : ");
            display();
            break;
        case 3:
            printf("\n\nInsert At Ending :\n");
            inserting_At_Ending();
            printf("\n\nLinked List : ");
            display();
            break;
    }

    getch();
    return 0;
}


void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void inserting_At_Beginning(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}

void inserting_After_Given_Position(){
    int pos,i=1;
    printf("\nEnter position : ");
    scanf("%d",&pos);
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    temp=head;
    while(i<pos-1){
         temp=temp->next;
         i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void inserting_At_Ending(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
