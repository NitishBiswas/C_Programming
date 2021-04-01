#include<stdio.h>
main()
{
    int n,i,j,temp,count=0;
    printf("Enter how many number : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]>a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                i++;
            }
        }
        count++;
        if(count==1){
            printf("Largest Number = %d\n",a[i]);
        }
        if(count==2){
            printf("Second Largest Number = %d\n",a[i]);
        }
    }
    return 0;
}
