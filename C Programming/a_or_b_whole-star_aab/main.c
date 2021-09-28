#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    int i,diu = 0, len;
    printf("Enter your string for RE (a|b)*aab : ");
    gets(input);
    len = strlen(input);
    if(len>=3)
    {
        if(input[len-3] != 'a' || input[len-2] != 'a' || input[len-1] != 'b')
        {
            printf("Wrong Input!\a");
            return 0;
        }
        else
        {
            diu = 1;
        }
    }
    else
    {
        printf("Wrong Input!\a");
        return 0;
    }
    for(i = 0; i < len-3; i++)
    {
        if(input[i] != 'a')
        {
            if(input[i] != 'b')
            {
                printf("Wrong Input!\a");
                return 0;
            }
        }
    }
    if(diu == 1)
    {
        printf("Accepted!");
    }

    return 0;
}
