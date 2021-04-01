#include<stdio.h>
main()
{
    int i;
    for(i=0;i<4;i++)
        printf("* ");
    printf("\n");
    for(i=0;i<2;i++)
        printf("*     ");
    printf("\n");
    for(i=2;i>0;i--)
        printf("*     ");
    printf("\n");
    for(i=4;i>0;i--)
        printf("* ");
}
