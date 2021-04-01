//A program to using all operator
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,d,e,f,g,h,i,j,k,max,Add,Sub,Mult,IntD,MoD;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("*Arithmetic Operators: + - * / % \n");
    Add=a+b;//Addition
    printf(" Add=%d\n",Add);
    Sub=a-b;//Subtraction
    printf(" Sub=%d\n",Sub);
    Mult=a*b;//Multiplication
    printf(" Mult=%d\n",Mult);
    IntD=a/b;//Integer Division
    printf(" IntD=%d\n",IntD);
    MoD=a%b;//Modulo Division
    printf(" MoD=%d\n",MoD);
    printf("*Relational Operators: < > <= >= == != if if-else nested-if for while \n");
    if(a>b)
    {
        max=a;
    }else{
        max=b;
    }
    printf(" max=%d\n",max);
    if(a>b){
        printf(" %d is greater than b.\n",a);
    }else{
        if(a<b){
        printf(" %d is less than b.\n",a);
    }else{
        if(a=b){
            printf(" %d is equal to b.\n",a);
    }
    }
    }
    printf("*Logical Operators: && || ! \n");
    printf("c=");
    scanf("%d",&c);
    if(a>b&&a>c){
        max=a;
    }else{
    if(b>a&&b>c){
        max=b;
    }else{
    if(c>a&&c>b){
        max=c;
    }
    }
    }
    printf(" max=%d\n",max);
    printf("*Assignment Operators: = \n");
    a=a+1;
    printf(" a+1=%d\n",a);
    printf("*Increment & Decrement Operators: ++ -- \n");
    b=++b;//prefix Increment
    printf(" b1=%d\n",b++);//postfix Increment
    printf(" b2=%d\n",b);
    printf(" b3=%d\n",--b);//prefix Decrement
    printf("*Conditional Operators: ? : \n");
    printf("d=");
    scanf("%d",&d);
    printf("e=");
    scanf("%d",&e);
    max=d>e?d:e;//Alternative if-else
    printf(" max=%d\n",max);
    printf("*Bitwise Operators: & | << >> \n");
    printf("f=");
    scanf("%d",&f);
    printf("g=");
    scanf("%d",&g);
    h=f&g;//AND
    printf(" h=%d\n",h);
    i=f|g;//OR
    printf(" i=%d\n",i);
    j=f<<1;//Left shift
    printf(" j=%d\n",j);
    k=g>>1;//Right shift
    printf(" k=%d\n",k);
    printf("*Special Operator: , \n");
    printf(" Comma has already been used in every case.");
    getch();
    return 0;
}
