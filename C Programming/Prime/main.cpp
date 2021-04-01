#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
    int n,a,prime;
    printf("Enter number : ");
    scanf("%d",&n);
    for(a=2;a<=sqrt(n);a++){
        if(n%a==0){
            prime=0;
            goto diu;
        }
    }
    diu:if(prime==0){
        printf("%d is not a prime number.",n);
    }else{
        printf("%d is a prime number.",n);
    }
    getch();
    return 0;
}
