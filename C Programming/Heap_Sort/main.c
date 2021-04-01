//Dhaka International University
//Name : Nitish Biswas
//Roll : 05
//Batch : 51 ( 1st Shift )

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int n,i,choice;
    printf("Enter how many numbers you want to insert: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    heapSort(arr, n);

    printf("********************* Menu ***********************\n");
    printf("Press 1 for ascending order sorting\n");
    printf("Press 2 for descending order sorting\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    if(choice == 1)
    {
        printf("You have chosen ascending order sorting\nSorted list : ");
        for(i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else if(choice == 2)
    {
        printf("You have chosen descending order sorting\nSorted list : ");
        for(i=n-1; i>=0; i--)
        {
            printf("%d ",arr[i]);
        }
    }
    else
    {
        printf("Wrong Input");
    }
}
