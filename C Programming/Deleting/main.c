#include <stdio.h>
main()
{
    int n,i,key,m;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements : \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter which index : ");
    scanf("%d",&m);
    for(i=m;i<n;i++){
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
    return 0;
}
