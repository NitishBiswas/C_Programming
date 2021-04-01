#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year1,year2,i,count = 0;
    printf("Enter Initial year : ");
    scanf("%d",&year1);
    printf("Enter Final year : ");
    scanf("%d",&year2);
    if(year1<year2){
        for(i=year1;i<=year2;i++){
            if(i%4==0){
            count++;
            printf("%d is leap year\n",i);
        }

    }
    printf("\nTotal leap year from %d to %d = %d",year1,year2,count);
    }else{
        for(i=year1;i>=year2;i--){
            if(i%4==0){
            count++;
            printf("%d is leap year\n",i);
        }

    }
    printf("\nTotal leap year from %d to %d = %d",year1,year2,count);
    }
    return 0;
}
