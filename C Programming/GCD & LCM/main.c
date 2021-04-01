#include <stdio.h>
main()
{
    int num1,num2,n1,n2,r,GCD,LCM;
    scanf("%d%d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0){
        r=n1%n2;
        n1=n2;
        n2=r;
    }
    GCD=n1;
    LCM=(num1*num2)/GCD;
    printf("GCD = %d\nLCM = %d\n",GCD,LCM);
    return 0;
}
