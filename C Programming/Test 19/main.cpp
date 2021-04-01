#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,max,i,j,k,n;
    char option;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        max=a;
    }else{
        max=b;
        if(b>c){
            max=b;
        }else{
            max=c;
            if(c>a){
                max=c;
            }else{
                max=a;
            }
        }

    }
    printf("max=%d\n",max);

    if(a>b&&a>c){
        max=a;
    }else{
        if(b>c&&b>a){
            max=b;
        }else{
            if(c>a&&c>b){
                max=c;
            }
        }
    }
    printf("max=%d\n",max);

    max=a>b?a:b;
    printf("max=%d\n",max);

    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
            printf(" %d x %d = %d\n",i,j,i*j);
            printf("\n");
    }
    printf("Enter Number:");
    scanf("%d",&n);
    printf("\n Even:");
    for(k=2;k<=n;k=k+2)
        printf(" %d ",k);
    printf("\n");
    printf("\n Odd:");
    for(k=1;k<=n;k=k+2)
        printf(" %d ",k);
        printf("\n");
        printf(" Enter Number:");
        scanf("%d",&n);
        if(n%2==0){
            printf("\n %d is Even",n);
        }else{
            printf("\n %d is Odd",n);
        }
        printf("\n");
        printf(" Enter Number:");
        scanf("%d",&n);
        if(n/2*2==n){
            printf("\n %d is Even",n);
        }else{
            printf("\n %d is Odd",n);
        }
        printf("\n");
        printf(" Enter Number:");
        scanf("%d",&n);
        if(n&1){
            printf("%d is Odd",n);
        }else{
            printf("%d is Even",n);
        }
        printf("\n");
        do{
        printf("\n Enter Number:");
        scanf("%d",&n);
        printf(" Even:");
        i=2;
        while(i<=n){
            printf(" %d ",i);
            i=i+2;
        }
        printf("\n");
        printf(" Odd:");
        i=1;
        while(i<=n){
            printf(" %d ",i);
            i=i+2;
        }

        printf("\n Do you want to check again y/n? ");
        scanf("%c",&option);
        option=getche();
        }while(option=='y');
        int a[5],i;
        for(i=0;i<5;i++)
        {
            printf("a[%d]=",i);
            scanf("%d",&a[i]);
        }
        for(i=0;i<5;i=i+2)
        {
            printf(" %d ",a[i]);
        }
        printf("\n Reverse Numbers:");
        i=4;
        while(i>=0)
        {
            printf(" %d ",a[i]);
            i=i-2;
        }
        int i=1,sum=0;
        while(i<22)
        {
            printf(" %d ",i);
            sum=sum+i;
            i=i+2;
        }
        printf("\n Sum=%d",sum);


}
