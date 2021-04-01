#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
main()
{
    int i,j,c1=0,c2=0,n;
    printf("Enter how many number : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter %d number : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            c1++;
        }else if(a[i]>a[i+1]){
            c2++;
        }else{
            printf("\nUnsorted List !");
            break;
        }

        if(c1==1 && c2==1){
            printf("\nUnsorted List !");
            break;
        }
    }
    if(c1==n-1||c2==n-1)
        printf("\nSorted List !");
    getch();
    return 0;
}

