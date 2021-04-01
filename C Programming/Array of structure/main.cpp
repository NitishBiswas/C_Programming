#include<stdio.h>
#include<conio.h>
#include<ctype.h>
typedef struct
{
    char name[100];
    int roll;
}student;
main()
{
    int i,j,n;
    char ch1,ch2;
    printf("Enter how many students : ");
    scanf("%d",&n);
    student s[n];
    for(i=0; i<n; i++){
        printf("Enter Name : ");
        scanf("%s",s[i].name);
        printf("Enter Roll : ");
        scanf("%d",&s[i].roll);
    }
    for(i=0; i<n; i++){
        printf("\n Name : ");
        for(j=0; s[i].name[j]!='\0'; j++){
                if(j==0){
                      ch1=s[i].name[j];
                    if(islower(ch1)){
                      ch2=toupper(ch1);
                      printf("%c",ch2);
                      continue;
                    }
                }
            printf("%c",s[i].name[j]);
        }
        printf("\n Roll = %d\n",s[i].roll);
    }
}
