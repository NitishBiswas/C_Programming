#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    if(n>0&&n<50){
        printf("W");
        for(i=0;i<n;i++){
            printf("o");
        }
        printf("w");
    }
    printf("%d",sizeof(n));
    return 0;
}
