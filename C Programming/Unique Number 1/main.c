#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
               a[j]=0;
            }
        }
        if(a[i]!=0){
               printf("%d",a[i]);
            }
    }
    return 0;
}
