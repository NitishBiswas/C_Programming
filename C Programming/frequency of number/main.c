#include<stdio.h>
int main()
{
    int size,i,j,count=1,index;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]>a[j]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    for(i=0;i<size;){
        for(j=i+1;j<size;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
       index=i;
       i=i+count;
       printf("%d repeated %d times\n",a[index],count);
       count=1;
    }
}
