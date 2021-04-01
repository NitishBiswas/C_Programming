
#include <stdio.h>

void display_of_factorial(int num){
    static int count = 0;
    static int fact = 1;
    if(num == 0){
        printf("Factorial of %d th number is %d",count,fact);
        return;
    }else{
        count++;
        fact*=num;
        display_of_factorial(--num);
    }
}
int main()
{
    int num;
    printf("Enter the Nth number : ");
    scanf("%d",&num);
    display_of_factorial(num);
    return 0;
}
