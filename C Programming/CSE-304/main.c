#include <stdio.h>

double func(double x){
    return x*x*x - 2*x*x + 5;
}

double c,e = 0.001;

void bisection(double a,double b){
    if(b<=a || func(a)*func(b) >= 0){
        printf("Incorrect value of a and b");
        return;
    }
    int i = 1;
    double m = (a+b)/2;
    while(fabs(func(m)) >= e){
        printf("s=%d\t",i);
        i++;
        printf("a=%.3lf\t",a);
        printf("f(a)=%.3lf\t",func(a));
        printf("b=%.3lf\t",b);
        printf("f(b)=%.3lf\t",func(b));
        c = (a+b)/2;
        m = c;

        if(func(c) == 0.0){
            printf("c=%.3lf\tf(c)=%.5lf\t",c,func(c));
            break;
        }else if(func(c)*func(a) < 0.0){
            printf("c=%.3lf\tf(c)=%.5lf\t",c,func(c));
            b = c;
            printf("b=c");
        }else if(func(c)*func(b) < 0.0){
            printf("c=%.3lf\tf(c)=%.5lf\t",c,func(c));
            a = c;
            printf("a=c");
        }
        printf("\n");
    }
    printf("\nAccurate Root calculated is = %.5lf\n",c);
}
int main()
{
    double a,b;
    printf("Enter value of a and b : ");
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("The function used is x^3 - 2x^2 + 5\n");
    printf("Initial a = %lf\t",a);
    printf("Initial b = %lf\n\n",b);
    bisection(a,b);
    return 0;
}
