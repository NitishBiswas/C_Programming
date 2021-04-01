#include <stdio.h>
main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    int temp = n;
    while(n!=0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==temp){
        printf("%d is Armstrong Number\n",temp);
    }else{
        printf("%d is not Armstrong Number\n",temp);
    }
    return 0;
}
