#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    char ch;
    int Age;
    printf("\n\n If you want to know your past or future, Please enter the first letter of your Name and Enter your Age ..");
    printf("\n\n 1.Enter first letters of your name and press Enter: ");
    scanf("%c",&ch);
    printf("\n\n 2.Enter your age and press Enter");
    printf("\n\n When your Age: ");
    scanf("%d",&Age);
    if (Age<=5){
        printf("\n\n Explains: You were a little baby.\n\n Thank You.\n\n",ch,Age);
    }else{
        if (Age<=10){
            printf("\n\n Explains: You were naughty.\n\n Thank You.\n\n",ch,Age);
        }else{
            if (Age<=15){
                 printf("\n\n Explains: You were busy studying.\n\n Thank You.\n\n",ch,Age);
            }else{
                if (Age<=19){
                    printf("\n\n Explains: You were involved in relationship.\n\n Thank You.\n\n",ch,Age);
                }else{
                    if (Age<=25){
                        printf("\n\n Explains: You will get married.\n\n Thank You.\n\n",ch,Age);
                    }else{
                        if (Age<=40){
                            printf("\n\n Explains: You will be the parents of 10 children.\n\n Thank You.\n\n",ch,Age);
                        }else{
                            if (Age<=80){
                                printf("\n\n Explains: You will live happily together with everyone.\n\n Thank You.\n\n",ch,Age);
                            }else{
                                if (Age<=200){
                                    printf("\n\n Explains: God knows how long you will live.\n\n Thank You.\n\n",ch,Age);
                                }

                            }

                        }

                    }

                }
            }
        }
    }
   getch();
}
