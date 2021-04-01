#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter how many number : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Even:\t\tOdd:\n");
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            printf("%d\n",a[i]);
        }else{
            printf("\t\t%d\n",a[i]);
        }
    }
    return 0;
}
