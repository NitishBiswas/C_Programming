#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char input[1000];
    printf("Enter your variable - ");
    gets(input);
    int length = strlen(input);
    for(int i = 1; input[i] != '\0'; i++){
        if(input[0] != '*' && input[0] != '_' && (input[0] < 65 || input[0] > 90) && (input[0] < 97 || input[0] > 122) || length > 31){
            printf("Its Not a variable!\a");
            return 0;
        }
    }
    printf("Its a variable!");
    return 0;
}
