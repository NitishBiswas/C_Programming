
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char input[1000];
    printf("Enter a binary number - ");
    gets(input);
    int length = strlen(input);
    for(int i = 0; input[i] != '\0'; i++){
        if(input[i] < '0' || input[i] > '1'){
            printf("Wrong Input!\a");
            return 0;
        }
    }
    if(input[length - 1] == '0' && input[length-2] == '0'){
        printf("The binary number is divisible by 4 !");
    }else{
        printf("The binary number is not divisible by 4 !");
    }
    return 0;
}
