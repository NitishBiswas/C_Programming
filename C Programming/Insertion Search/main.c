#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++){
            temp=a[i];
        for(j=i-1;j>=0&&a[j]<temp;j--){
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
