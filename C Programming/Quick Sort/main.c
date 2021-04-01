//Dhaka International University
//Name : Nitish Biswas
//Roll : 05
//Batch : 51 ( 1st Shift )

#include<stdio.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);


        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n,i,j,choice;
    printf("Enter how many numbers you want to insert: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quickSort(arr, 0, n-1);
    printf("********************* Menu ***********************\n");
    printf("Press 1 for ascending order sorting\n");
    printf("Press 2 for descending order sorting\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    if(choice == 1){
        printf("You have chosen ascending order sorting\nSorted list : ");
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }else if(choice == 2){
        printf("You have chosen descending order sorting\nSorted list : ");
        for(i=n-1;i>=0;i--){
            printf("%d ",arr[i]);
        }
    }else{
        printf("Wrong Input");
    }
    return 0;
}
