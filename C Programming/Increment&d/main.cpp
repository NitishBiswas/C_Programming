/*#include<stdio.h>
int main()
{
    int a;
    a=5;
    a+=1;
    a++;
    a--;
    printf(" a=%d\n\n",a);
     printf(" a2=%d\n\n",++a);

    return 0;
}*/
/*#include<stdio.h>
#include<conio.h>
main()
{
    printf(" B.Sc in CSE\n B.Sc in CSE\n B.Sc in CSE\n B.Sc in CSE\n B.Sc in CSE\n B.Sc in CSE");
}*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    char option;
    do{
    scanf("%d%d",&a,&b);
    c=a+b;
    printf(" %d\a\n",c);
    printf(" do you want to continue y/n?\n");
    option=getche();
    }while(option=='y');
    getch();
    }
