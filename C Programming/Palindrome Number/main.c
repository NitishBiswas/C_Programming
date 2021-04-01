#include <stdio.h>
main()
{
    int n,i,r,sum=0;
    scanf("%d",&n);
    int temp = n;
    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==temp){
        printf("%d is Palindrome\n",temp);
    }else{
        printf("%d is not Palindrome\n",temp);
    }
    return 0;
}
