#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4],max,min,i;
    printf("Enter 4 number : \n");
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<4;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Maximum = %d\nMinimum = %d",max,min);
    return 0;
}
