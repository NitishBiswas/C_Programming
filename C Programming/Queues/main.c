#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void show(void);
int main()
{
    //clrscr();
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t QUIEUE OPERATIONS USING STACK");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.SHOW\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }

        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");

    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void show()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=0; i<=top; i++)
            printf(" %d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }

}

void pop()
{
    if(top<=-1)
    {
        printf("\n\tSTACK is under flow");

    }
    else
    {
        int i;
        for(i=0;i<top;i++){
            stack[i]=stack[i+1];
        }
    }
    top--;
}
