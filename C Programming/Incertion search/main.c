#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,temp,n,ch;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Press 1 for Ascending\nPress 2 for Descending");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    int a[n];
	printf("Enter array elements : ");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=2;i<=n;i++){
            temp=a[i];
            j=i-1;
            while(j>0&&a[j]>temp){
                    a[j+1]=a[j];
                    j--;
                }
                a[j+1]=temp;
        }
    if(ch==1){
        printf("Ascending: ");
        for(i=1;i<=n;i++)
            printf("%d ",a[i]);
	}else if(ch==2){
        printf("Descending: ");
        for(i=n;i>0;i--)
            printf("%d ",a[i]);
	}else{
        printf("Wrong");
	}
    return 0;
}
