#include <stdio.h>
#include <stdlib.h>
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp,*temp1,*temp2;
int main()
{
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
        printf("Do you want to insert another data(0,1)? :  ");
        scanf("%d",&choice);
    }while(choice);
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }


    deleteB();
    deleteE();
    deleteM();


    return 0;
}
void deleteB(){
    printf("\nDelete at beginning : ");
    temp1=head;
    head=head->next;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    free(temp1);
}

void deleteE(){
    printf("\nDelete at end : ");
    temp=head;
    while(temp->next!=NULL){
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
    free(temp);
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void deleteM(){
    printf("\nDelete at middle : ");
    int p,i=1;
    printf("Enter position : ");
    scanf("%d",&p);
    temp=head;
    while(i<p){
        temp1=temp;
        temp=temp->next;
        i++;
    }
    temp1->next=temp->next;
    temp2=temp;
    free(temp2);
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

