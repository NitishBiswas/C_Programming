#include<stdio.h>
#include<conio.h>
main()
{
    int n,a[5000],i,temp,step;
    float med;
    printf(" How many number do you want to take : ");
    scanf("%d",&n);
    for(i=0 ; i<n ; ++i){
        printf(" Value No. %d enter: ",i+1);
        scanf("%d",&a[i]);
    }
    for(step=0;step<n-1;++step)
    for(i=0; i<n-step-1; ++i){
        if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    printf(" Ascending order:\n\n");
    for(i=0;i<n;++i){
        printf(" %d",a[i]);
    }
    printf("\n");
    if(n%2==0){
        i=(n/2)-1;
        med=(a[i]+a[i+1])/2;
        printf("\n\a Median = %.2f",med);
    }else{
        i=n/2;
        printf("\n\a Median = %d",a[i]);
    }
    getch();
    return 0;
}
