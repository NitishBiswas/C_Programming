#include<stdio.h>
 typedef struct
 {
     char name[30];
     int roll;
     float markes;
 }students;
 main()
 {
     students detals[3];
     int i;
     for (i=0; i<3; i++)
     {
          printf("Enter Name=");
          scanf("%s",&detals[i].name);
           printf("Enter Roll=");
               scanf("%d",&detals[i].roll);
                    printf("Enter Markes=");
               scanf("%f",&detals[i].markes);
     }
     for (i=0; i<3; i++)
     {
         printf("%s %d %.2f\n",detals[i].name,detals[i].roll, detals[i].markes);
     }

 }
