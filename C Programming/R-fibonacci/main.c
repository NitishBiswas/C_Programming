#include<stdio.h>
#include<conio.h>
void fib(int n,int a,int b,int c){
    static int i = 2;
    if(i<n){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
        fib(n,a,b,c);
    }
}
main()
{
    int a=0,b=1,c,n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Fibonacci series : ");
    printf("%d %d ",a,b);
    fib(n,a,b,c);
    return 0;
}
