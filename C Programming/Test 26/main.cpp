/*#include<stdio.h>
main()
{
   int i;
   i=100;
      do{
      printf("%d",i);
      i=i-30;
      }while(i>20);
}
#include<stdio.h>
main()
{
int i;
i=100;
      do
      {
      printf("%d",i);
      i=i-30;}
      while (i>20);
      printf(" Difficult!");
}
#include<stdio.h>
main()
{
    int i;
    i=5;
    do{
    printf("Break Fail");
    i--;
    }while(i>1);
    printf("\n");
    for(i=5;i>1;i--)
        printf("Break Fail");
}
#include<stdio.h>
main()
{
    int i;
    for(i=10;i>5;i=i-2);
    {
        printf("Easy");
    }
}

#include<stdio.h>
main()
{
    int i;
    i=10;
    while(i>5)
    {
        printf("Easy");
        i=i-2;
    }
}

#include<stdio.h>
main()
{
    int i;
    i=10;
    do
    {
        printf("Easy");
        i=i-5;
    }while(i>5);
}

#include<stdio.h>
main()
{
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
        printf("%d\n",i+j);
    printf("Is it possible?");
}
#include<stdio.h>
main()
{
    int i,j;
    i=0;
    while(i<3)
    {
        j=0;
        while(j<2)
        {
            printf("%d\n",i+j);
            j++;
        }
        i++;
    }
    printf("Is it possible?");
}
#include<stdio.h>
main()
{
    int i,j;
    i=0;
    do
    {
        j=0;
        do
        {
            printf("%d\n",i+j);
            j++;
        }while(j<2);
        i++;
    }while(i<3);
    printf("Is it possible?");
}
#include<stdio.h>
main()
{
    int i,sum=0;
    for(i=1;i<5;i++)
        sum=sum+i;
    printf("%d",sum);
}

#include<stdio.h>
main()
{
    int i,sum=0;
    i=1;
    while(i<5)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
}

#include<stdio.h>
main()
{
    int i,sum=sum+i;
    i=1;
    do
    {
        sum=sum+i;
        i++;
    }while(i<5);
    printf("%d",sum);
}
#include<stdio.h>
main()
{
    int a=0,b=1,c,n;
    scanf("%d",&n);
    printf("%d %d",a,b);
    c=a+b;
    do
    {
        printf(" %d",c);
        a=b;
        b=c;
        c=a+b;
    }while(c<=n);
}
//use loop to using array
#include<stdio.h>
main()
{
    int a[4],i;
    i=0;
    while(i<4)
    {
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    while(i<4){

        printf("%d ",a[i]);
        i=i+2;
    }

}
#include<stdio.h>
main()
{
    int a[4],i;
    for (i=0; i<=3; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<4;i++)
    {
        printf("%d",a[i]);
    }

}
#include<stdio.h>
main()
{
    int a[4],i;
    i=0;
    do
    {
        scanf("%d",&a[i]);
        i++;
    }while(i<4);

    i=0;
    do
    {
        printf("%d",a[i]);
        i++;
    }while(i<4);

}*/

#include<stdio.h>
main()
{
  int n,r;
  scanf("%d",&n);
  for( ;n>0;n=n/10)
  {
    r=n%10;
    printf("%d",r);
  }
}
