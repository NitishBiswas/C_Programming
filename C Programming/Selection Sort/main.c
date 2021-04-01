//Dhaka International University
//Name : Nitish Biswas
//Roll : 05
//Batch : 51 ( 1st Shift )

#include <stdio.h>

int main()
{

    int num,i,j,choice,temp,min;
    printf("Enter how many numbers you want to insert: ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the numbers: ");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num-1;i++){
       min=i;
       for(j=i+1;j<num;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
       }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
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
