#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
    return 0;
}
