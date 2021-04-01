#include<stdio.h>
main()
{
    int a=1;
    int b=1;
    int c;
    int d;
    c=++a||++b;
    d=--a&&b--;
    printf("%d %d %d %d ",a,b,c,d);
}
