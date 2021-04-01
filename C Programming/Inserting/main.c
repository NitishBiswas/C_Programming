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
    printf("Enter a number : ");
    scanf("%d",&key);
    printf("Enter which index : ");
    scanf("%d",&m);
    for(i=n-1;i>=m;i--){
        a[i+1]=a[i];
    }
    a[m]=key;
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}
