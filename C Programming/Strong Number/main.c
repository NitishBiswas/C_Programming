#include <stdio.h>
main()
{
    int num,i,rem,temp,sum=0;
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        rem=num%10;
        int fact=1;
        for(i=1;i<=rem;i++){
            fact*=i;
        }
        sum+=fact;
        num=num/10;
    }
    if(temp==sum){
        printf("%d is Strong Number.\n",temp);
    }else{
        printf("%d is not Strong Number.\n",temp);
    }
    return 0;
}
