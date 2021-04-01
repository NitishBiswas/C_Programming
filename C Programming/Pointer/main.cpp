//Reverse a string
#include<stdio.h>
main()
{
    char *p,*q,*r,temp;
    gets(p);
    q=p;
    r=p;
    while(*q!='\0')
        q++;
    q--;
    while(p<q)
    {
        temp=*p;
        *p=*q;
        *q=temp;
        p++;
        q--;
    }
    puts(r);
}
