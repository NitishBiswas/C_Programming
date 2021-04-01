#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
main()
{
    int n,choice,temp,i,j;

    printf("Enter how many numbers do you want to insert : ");
    scanf("%d",&n);
    int num[n];
    printf("Enter Numbers : ");
    for(i=0;i<n;i++)
       scanf("%d",&num[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(num[j]<num[i]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("\n------------Menu-----------\n\n");
    printf("Press 1 for Ascending order sorting\n");
    printf("Press 2 for Descending order sorting\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("\nYou have chosen ascending order sorting\n\nSorted list : ");
            for(i=0;i<n;i++)
                printf("%d ",num[i]);
            break;
        case 2:
            printf("\nYou have chosen descending order sorting\n\nSorted list : ");
            for(i=n-1;i>=0;i--)
                printf("%d ",num[i]);
            break;
        default : printf("Wrong Input ! \a");
    }

    getch();
    return 0;
}
