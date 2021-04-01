#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,temp;
    printf("Enter how many number : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ascending = ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]>a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nDescending = ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
