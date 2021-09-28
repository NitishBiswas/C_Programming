#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    int i,diu = 0, len;
    printf("Enter your string for RE ab*|a*b : ");
    gets(input);
    len = strlen(input);
    if(len>=2)
    {
        if(input[0] != 'a' || input[len-1] != 'b')
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
    for(i = 1; i < len-2; i++)
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
