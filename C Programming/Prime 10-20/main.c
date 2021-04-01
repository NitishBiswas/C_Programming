#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
    int n,a,prime,i;
    for(i=10;i<=30;i++){
        n=i;
        prime=1;
    for(a=2;a<=sqrt(n);a++){
        if(n%a==0){
            prime=0;
            goto diu;
        }
    }
    diu:
        if(prime!=0){
        printf("%d ",n);
    }

    }
    getch();
    return 0;
}
