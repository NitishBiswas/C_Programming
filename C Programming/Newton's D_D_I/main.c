
#include <stdio.h>
#include <conio.h>

float multiplying(int i,float value,float x[]);

main()
{
    int n,i,j;
    printf("Enter how many numbers : ");
    scanf("%d",&n);
    float x[n];
    float y[n][n];
    for(i = 0; i < n; i++)
    {
        printf("Enter x%d : ",i);
        scanf("%f",&x[i]);
    }
    for(i = 0; i < n; i++)
    {
        printf("Enter y%d : ",i);
        scanf("%f",&y[i][0]);
    }

    for(i = 1; i < n; i++){
        for(j = 0; j < n-i; j++){
            y[j][i] = (y[j][i-1] - y[j+1][i-1]) / (x[j] - x[i+j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n-i; j++){
            printf("%f\t ",y[i][j]);
        }
        printf("\n");
    }

    float value;
    printf("\nEnter interpolate value X : ");
    scanf("%f",&value);

    float sum = y[0][0];
    for(int i = 1; i < n; i++){
        sum = sum + (multiplying(i,value,x) * y[0][i]);
    }

    printf("\n.'. f(%.2f) = %.3f",value,sum);

    getch();
    return 0;
}

float multiplying(int i,float value,float x[]){
    float multi = 1;
    for(int j = 0; j < i; j++){
        multi = multi * (value - x[j]);
    }
    return multi;
}

