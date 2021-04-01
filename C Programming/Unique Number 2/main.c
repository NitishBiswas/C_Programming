#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n],b[100]={0};
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b[a[i]]++;
    }
    printf("Unique Number : ");
    for(i=0;i<10;i++){
        if(b[i]!=0){
            printf("%d ",i);
            //printf(" repeat %d times\n",b[i]);
        }

    }
    return 0;
}
