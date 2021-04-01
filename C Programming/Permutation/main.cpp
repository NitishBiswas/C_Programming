#include<stdio.h>
main()
{
    int n,i,j,k;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
                if(j!=i){
                    for(k=1;k<=n;k++){
                            if(k!=j&&k!=i){
                                printf("%d , %d , %d \n",i,j,k);
                            }
                }
            }

        }
    }
}
