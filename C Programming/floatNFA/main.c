#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char input[1000], chkdot=0, temp, eTemp, count=0;
    printf("Enter your floating point- ");
    gets(input);
    int length = strlen(input);
    if(input[0]=='.')
    {
        printf("Rejected");
        return 0;
    }
    for(int j=0; input[j]!='\0'; j++)
    {
        if(input[j]=='.')
        {
            temp = j;
            chkdot++;
            if(chkdot>1)
            {
                printf("Rejected");
                return 0;
            }
        }
        else if(input[j]>='A' && input[j]<='Z' || input[j]>='a' && input[j]<='z')
        {
            if(input[j] != 'E' && input[j] != 'e'){
                printf("Rejected");
                return 0;
            }
            if(input[j] == 'E' || input[j] == 'e'){
                count++;
            }
            eTemp = j;
        }
    }
    if(chkdot==1 && temp < eTemp - 1 && count < 2 && eTemp < length-1)
    {
        printf("This floating point ");
        puts(input);
        printf(" is accepted");
    }else{
        printf("Rejected");
    }
    return 0;
}
