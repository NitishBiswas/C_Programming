#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,sum;
    scanf("%d",&n);
    for(int i=0;i<2;i++){
        scanf("%d%d",&a,&b);
        sum=0;
        for(int j=a;j<=b;j++){
            if(j%2==1){
                sum=sum+j;
            }
        }
        printf("Case %d: %d\n",i+1,sum);
    }
    return 0;
}
