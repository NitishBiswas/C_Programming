#include<stdio.h>
#include<conio.h>
void main()
{
    printf("Queue using Array");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    int n;
    printf("\nEnter Size of Array: ");
    scanf("%d",&n);
    int queue[n],ch=1,front=0,rear=0,i,x=n;
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no: ");
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Queue is empty!");
            }
            else
            {
                printf("\n Deleted Element is %d\n",queue[front++]);
                x++;
            }
            break;
        case 3:
            printf("\n Queue Elements are:\n");
            if(front==rear)
                printf("\n Queue is Empty!");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf(" %d",queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            }
        }
    }
    getch();
}
