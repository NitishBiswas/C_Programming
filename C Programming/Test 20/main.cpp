#include<stdio.h>
main()
{
    int a[9],i,sum=0,CSE,EETE,foreign,boys,girls;
    printf("*************** DIU Campus(Green Road) *****************");
    printf("\n");
    for(i=1;i<10;i++)
    {
        printf(" Number of students in %d floor= ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=1;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf(" Total number of students in DIU Campus= %d",sum);

    printf("\n");
    CSE=sum*70/100;
    printf(" Number of students in CSE department = %d",CSE);
    printf("\n");
    EETE=sum-CSE;
    printf(" Number of students in EETE department = %d",EETE);
    printf("\n");
    boys=sum*80/100;
    printf(" Number of boys in DIU Campus = %d",boys);
    printf("\n");
    girls=sum-boys;
    printf(" Number of girls in DIU Campus = %d",girls);
    printf("\n");
    foreign=sum*60/100;
    printf(" Number of foreigner students in DIU Campus = %d",foreign);
    printf("\n");
    return 0;

}
