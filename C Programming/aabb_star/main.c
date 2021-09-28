#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    int i,diu = 0, len;
    printf("Enter your string for RE aabb* : ");
    gets(input);
    len = strlen(input);
    if(len>=3)
    {
        if(input[0] != 'a' || input[1] != 'a' || input[2] != 'b')
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
    for(i = 3; i < len; i++)
    {
        if(input[i] != 'b')
        {
            printf("Wrong Input!\a");
            return 0;
        }
    }
    if(diu == 1)
    {
        printf("Accepted!");
    }

    return 0;
}
