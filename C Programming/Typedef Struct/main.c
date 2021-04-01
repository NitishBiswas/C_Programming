#include<stdio.h>
typedef struct
{
 char name[50];
 int roll;
 int marks;
}students;
 main()
 {
     students s[1];
     int i,max;
     for(i=0;i<3;i++)
        scanf("%s%d%d",s[i].name,&s[i].roll,&s[i].marks);
     max=s[0].marks;
     for(i=0;i<3;i++)
     {
         if(s[0].marks>max)
            max=s[0].marks;
     }
      printf("%d",max);
 }
