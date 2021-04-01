#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf(" ");
        }
        for(k=i;k>=1;k--){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
