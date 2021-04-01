#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,temp,min,ch;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Press 1 for Ascending\nPress 2 for Descending");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);

    printf("Enter array elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
       min=i;
       for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
       }
    }
	if(ch==1){
        printf("Ascending: ");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
	}else if(ch==2){
        printf("Descending: ");
        for(i=n-1;i>=0;i--)
            printf("%d ",a[i]);
	}else{
        printf("Wrong");
	}
    return 0;
}
