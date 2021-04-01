
#include <stdio.h>
#include <conio.h>

float p_value(float p,float n);
int fact(int n);

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
    for(i = 1; i < n; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            y[j][i] = y[j+1][i-1] - y[j][i-1];

        }
    }
    printf("\n");

    for(i = 0; i < n; i++)
    {
        printf("%.2f\t",x[i]);
        for(j = 0; j < n-i; j++)
        {
            printf("%f\t",y[i][j]);
        }
        printf("\n");
    }
    float value,sum,p;
    printf("\nEnter interpolate value X : ");
    scanf("%f",&value);
    sum = y[0][0];
    p = (value - x[0]) / (x[1] - x[0]);
    for(i = 1; i < n; i++)
    {
        sum = sum + (p_value(p,i) * y[0][i]) / fact(i);
    }

    printf("\n.'. f(%.2f) = %.3f",value,sum);

    getch();
    return 0;
}

float p_value(float p, float n)
{
    float temp = p;
    for(int i = 1; i < n; i++)
    {
        temp = temp * (p - i);
    }
    return temp;
}

int fact(int n)
{
    if(n>=1)
    {
        return n * fact(n-1);
    }
    else
    {
        return 1;
    }
}
