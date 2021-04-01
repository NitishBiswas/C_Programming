#include <stdio.h>
main()
{
    int n,i,j,m,key,low,high,mid,temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element : ");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Enter the key value : ");
    scanf("%d",&key);
    low=1;
    high=n;
    while(low<=high){
        mid=(low+high)/2;
        if(key<a[mid]){
            high=mid-1;
        }else if(key>a[mid]){
            low=mid+1;
        }else if(key==a[mid]){
            printf("%d is found in this list\n",key);
            m=1;
            break;
        }

    }
    if(m!=1)
        printf("%d is not in the list ",key);
    return 0;
}
