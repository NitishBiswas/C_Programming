
#include <stdio.h>

void display_of_sum(int num){
    static int count = 0;
    static int sum = 0;
    if(num == 0){
        printf("Sum of %d th number is %d",count,sum);
        return;
    }else{
        count++;
        sum+=num;
        display_of_sum(--num);
    }
}
int main()
{
    int num;
    printf("Enter the Nth number : ");
    scanf("%d",&num);
    display_of_sum(num);
    return 0;
}
