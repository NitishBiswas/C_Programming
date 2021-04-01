#include<stdio.h>
int main()
{
    int n,i,j,s=0;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in array: \n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    int freq[100]= {0};
    for(i=0; i<n; i++)
        freq[a[i]]++;
    for(i=0; i<100; i++)
        if(freq[i])
            printf("Count of %d is %d\n",i,freq[i]);
    printf("What the number you want?\n");
    scanf("%d",&j);
    for(i=0; i<n; i++)
        if(a[i]==j)
        {
            printf("%d Yes This Number In The List, Position %d\n",j,i+1);
            s++;
        }
    if(s==0)
    {
        printf("NO!!!%d This Number Not This List\n",j);
    }
}
