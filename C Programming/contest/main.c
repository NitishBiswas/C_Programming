#include <stdio.h>

int main()
{
    int n,a,temp,r,sum,count;
    scanf("%d",&n);
    while(n--){
        count=0;
        scanf("%d",&a);
        while(1){
            temp=a;
            sum=0;
            while(a!=0){
                r=a%10;
                sum=sum*10+r;
                a=a/10;
            }
            if(sum==temp){
                printf("%d %d\n",count,sum);
                break;
            }
            count++;
            a=sum+temp;
        }
    }

    return 0;
}
