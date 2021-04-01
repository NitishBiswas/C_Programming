//A program to calculate the area of a circle,Documentation section
#include<stdio.h>//header files-stdio=standard input output
#include<conio.h>//header files-conio=consul input output
#difine Pi 3.1416//constant or fixed value
void main()//void means null/empty, - return type of value
{
    clrscr();//clear screen-clears previous output from monitor screen
    int r;//variable declaration-It means process of variable name with data type,int means data type & r means data name or variable name
    float a;//variable declaration,same
    scanf("%d",&r);//Taking input, scanf(); means input statement
    a=Pi*r*r;//Applied formula
    printf("%f",a);//output or Result,printf(); means Output statement,built in function
    getch();//get character,It shows only output
    return 0;//return statement
}
//main() call the other library or user-defined function
//C program is a mother language of programming.It also called case sensitive language
//When describe with note it's called comment statement
// /*.....*/ multi line comment , // single line comment both are used c++ but only multi line comment used C.
// int,float,char,double //built in data type
//variable means data names that maybe used to store in a value by a programmer.
//Token means symbol, 5 token
//1.keyword-it means fixed or reserve word/type of data .. int,float,char,void etc
//2.identifier- refer to the names of variable function & array.these are user defined names.identifier means data name.
//start with alphabet, int a100; r8 but int 100a ; rng
//under score can be used ,int a_b_c;
//no space in between,int abc;r8 but int a b c; rng
//maximum length(character 31)
//no keyword int char;rng
//3.operator-the character used to control mathematical and logical function in C/C++ language is called operator +-*/=<=>=<>...
//4.string- means multiple character enclosed in double quotation "Nitish Biswas"
//5.constant-means fixed value #define
//6.spacial symbol-.,:#(){}...
//N.B -main() ,-built in function ,-include ,define ,-header files are not include in token
//Documentation section
//Link section
//definition section-help us to declared constant
//Global declaration section
//main ();1.local variable-variable declaration 2.execution-processing
//sub-program function1 function2.......functionN
//Function prototype
//1.function declaration Ex.float area (int radius);-float means function return type,area means function name,(int radius)means parameter
//2.function call Ex. a=area(r);
//3.function definition Ex.float area (int radius);

