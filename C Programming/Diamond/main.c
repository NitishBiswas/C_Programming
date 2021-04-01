#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,num;
    printf("Enter a positive number : ");
    scanf("%d",&num);
    for(i=num;i>0;i--){
        for(j=i;j>0;j--){
            printf(" ");
        }
        for(k=num;k>i;k--){
            printf(" +");
        }
        printf("\n");
    }

    for(i=0;i<num;i++){
        for(j=i;j>0;j--){
            printf(" ");
        }
        for(k=num;k>i;k--){
            printf(" +");
        }
        printf("\n");
    }
    return 0;
}
