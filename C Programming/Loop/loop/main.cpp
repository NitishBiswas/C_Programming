#include<stdio.h>
#include<conio.h>
main()
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("Nitish Biswas \n");
    }


    int n;
    printf("Enter how much : ");
    scanf("%d",&n);
    int a[n];
    for(i=1; i<=n; i++){
        printf("Enter %d value : ",i);
        scanf("%d",&a[i]);
    }
    for(i=1; i<=n; i++){
        printf("%d ",a[i]);
    }


    int a,b,c,max,min;
    printf("Enter three Number:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            max=a;
        }else{
            max=c;
        }
    }else{
        if(b>c){
            max=b;
        }else{
            max=c;
        }
    }
    printf("Maximum = %d",max);


    int a[3],max,i;
    printf("Enter three value :\n");
    for(i=0; i<3; i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=0; i<3; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("Maximum = %d",max);
    getch();
}
