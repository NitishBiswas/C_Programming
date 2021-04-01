#include<stdio.h>
main()
{
    int a,b,min,max,sum;
    scanf("%d %d",&a,&b);
    if(a<b){
        min=a;
    }else{
        min=b;
    }
    if(a>b){
        max=a;
    }else{
        max=b;
    }
    sum=max+min;
    printf("Minimum=%d\nMaximum=%d\nSum=%d",min,max,sum);

    return 0;
}
