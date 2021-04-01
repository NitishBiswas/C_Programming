#include <stdio.h>
main()
{
    int n,i,j,temp,count=0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nValue of array : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    printf("\nUnique Number : \n");

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                i++;
            }
        }
        count++;
        printf("%d ",a[i]);
    }
    printf("\nTotal Number : %d \nTotal Unique Number : %d\n",n,count);
    return 0;
}
