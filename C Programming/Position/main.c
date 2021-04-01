#include <stdio.h>
main()
{
    int n,num,i;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter any number : ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(a[i]==num){
            printf("Yes!\n");
            printf("Position of this number : %d",i+1);
            return 0;
        }
    }
    printf("No!");
}
