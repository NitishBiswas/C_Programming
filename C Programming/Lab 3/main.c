//Dhaka International University
//Name : Nitish Biswas
//Roll : 05
//Batch : 51 ( 1st Shift )

#include <stdio.h>

int main()
{

    int num,i,j,choice,temp;
    printf("Enter how many numbers you want to insert: ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the numbers: ");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<num;i++){
        temp=arr[i];
        for(j=i-1;j>=0&&arr[j]>temp;j=j-1){
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
    printf("********************* Menu ***********************\n");
    printf("Press 1 for ascending order sorting\n");
    printf("Press 2 for descending order sorting\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    if(choice == 1){
        printf("You have chosen ascending order sorting\nSorted list : ");
        for(i=0;i<num;i++){
            printf("%d ",arr[i]);
        }
    }else if(choice == 2){
        printf("You have chosen descending order sorting\nSorted list : ");
        for(i=num-1;i>=0;i--){
            printf("%d ",arr[i]);
        }
    }else{
        printf("Wrong Input");
    }
    return 0;
}
