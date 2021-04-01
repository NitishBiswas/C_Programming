
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) 2*x*x*x-4*x-5
int main()
{
    float x0, x1, x2, f0, f1, f2, err;
    int step = 1;


up:
    printf("\nEnter two initial guesses:\n");
    scanf("%f%f", &x0, &x1);
    printf("Enter tolerable error:\n");
    scanf("%f", &err);

    f0 = f(x0);
    f1 = f(x1);

    if(x0>x1 || f0*f1 > 0.0)
    {
        printf("Incorrect Initial Guesses.\n");
        goto up;
    }

    printf("\nStep\t\tx0\t\tf0\t\tx1\t\tf1\t\tx2\t\tf(x2)\n");
    do
    {
        x2 = x0 - (x0-x1) * f0/(f0-f1);
        f2 = f(x2);
        printf("%d\t\t%f\t%f\t%f\t%f\t%f\t%f",step, x0, f0, x1, f1, x2, f2);
        if (f2==0.0)
        {
            printf("\nExact Root is: %f\n", x2);
            break;
        }
        else if (f0*f2 < 0)
        {
            x1 = x2;
            printf("\tx1 = x2 \n");
            f1 = f2;
        }
        else
        {
            x0 = x2;
            printf("\tx0 = x2\n");
            f0 = f2;
        }
        step = step + 1;
    }
    while(fabs(f2)>err);
    printf("\nRoot is: %f\n", x2);
}
