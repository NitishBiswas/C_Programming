#include <stdio.h>
main()
{
    int size,i,n,count=0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter a particular number : ");
    scanf("%d",&n);
    for(i=0;i<size;i++){
        if(n==a[i])
            count++;
    }
    printf("%d is %d times",n,count);
    return 0;
}
