//Print Even & Odd Numbers
#include<stdio.h>
main()
{
    int i,a;
    printf("Enter Number:");
    scanf("%d",&a);
    printf("\n Even Numbers:\n");
    for(i=2;i<=a;i=i+2){
        printf(" %d\t",i);
    }
    printf("\n Odd Numbers:\n");
    for(i=1;i<=a;i=i+2){
        printf(" %d\t",i);
    }
    return 0;
}
