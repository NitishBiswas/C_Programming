#include<stdio.h>
#include<conio.h>
#define Pi 3.1416
main()
{
    printf(" *First Program:");
    printf("\n DIU ");
    printf("\n *A program to add two integers:\n");
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    printf("c = %d + %d = %d\n",a,b,c);
    printf("\n *A program to calculate the area of a circle:\n");
    int r;
    float area;
    printf("Radius=");
    scanf("%d",&r);
    area=Pi*r*r;
    printf("Area = %f x %d x %d = %f\n",Pi,r,r,area);
    int min;
    printf("\n *Minimum of 3 integers using relational operators:\n");
    if(a<b){
        min=a;
    }else{
        min=b;
    if(b<c){
        min=b;
    }else{
        min=c;
    if(a<c){
        min=a;
    }else{
        min=c;
    }
    }
    }
    printf("\n a=%d,b=%d,c=%d\n\n Minimum = %d\n",a,b,c,min);
    printf("\n *Maximum of 3 integers using logical operators:\n");
    int max;
    if(a>b&&a>c)
        max=a;
    if(b>c&&b>a)
        max=b;
    if(c>a&&c>b)
        max=c;
    printf("\n a=%d,b=%d,c=%d\n\n Maximum = %d\n",a,b,c,max);
    printf("\n *Maximum of 2 integers using conditional operators:\n");
    max=a>b?a:b;
    printf("\n a=%d,b=%d\n\n Maximum=%d",a,b,max);
    printf("\n *Using for loop,while loop,do-while loop:\n");
    int array[3],i,sum=0;
    printf("\n *for loop:\n");
    for(i=1;i<4;i++)
        printf(" %d.Best of luck.\n",i);
    i=1;
    printf("\n *while loop:\n");
    while(i<4)
    {
        printf(" %d.God bless you.\n",i);
        i++;
    }
    i=1;
    printf("\n *do-while loop:\n");
    do
    {
        printf(" %d.You will get A+ in CSE exam.\n",i);
        i++;
    }while(i<4);
    printf("\n *Minimum of 3 integers and sum of total integers using array:\n");
    for(i=0;i<3;i++)
        scanf("%d",&array[i]);
    min=array[0];
    for(i=0;i<3;i++)
    {
        sum=sum+array[i];
        if(array[i]<min)
            min=array[i];
    }
    printf("\n Minimum=%d\n Sum=%d",min,sum);
    getch();
    return 0;
}
