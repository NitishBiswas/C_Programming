#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,num,count=0;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter a number : ");
    scanf("%d",&num);

    for(i=0;i<n;i++){
        if(a[i]==num){
            count++;
        }
    }
    if(count==0){
        printf("No");
    }else{
        printf("Yes\n");
        printf("%d is %d times",num,count);
    }

        return 0;
}

