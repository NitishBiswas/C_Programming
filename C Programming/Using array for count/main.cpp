//A program by using arrays to calculate of university student
#include<stdio.h>
#include<conio.h>
main()
{
    int a[9],i,j,sum=0,CSE,EETE,boys,girls,foreign;
    printf("\n*********** DIU Campus (Green Road) ************\n");
    for(i=0;i<9;i++)
    {
        printf("\n Number of Students in %d floor= ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++){
        sum=sum+a[i];
    }
    printf("\n Total Number of students in the DIU Campus= %d\n",sum);
    CSE=sum * 70/100;
    printf("\n Number of students in the CSE department= %d\n",CSE);
    EETE=sum-CSE;
    printf("\n Number of students in the EETE department= %d\n",EETE);
    boys=sum*90/100;
    printf("\n Number of boys in the DIU campus= %d\n",boys);
    girls=sum-boys;
    printf("\n Number of girls in the DIU campus= %d\n",girls);
    foreign=sum*60/100;
    printf("\n Number of foreign students in the DIU campus %d\n",foreign);
    getch();
    return 0;
}
