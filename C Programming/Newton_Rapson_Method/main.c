#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
/* Defining equation to be solved.Change this equation to solve another problem.
*/
//#define f(x) 3*x - cos(x) -1
#define f(x) 3*x*x*x - 2*x - 5
/* Defining derivative of g(x).As you change f(x), change this function also. */
//#define g(x) 3 + sin(x)
#define g(x) 9*x*x - 2
void main()
{
/*Newton Raphson method Steps (Rule)
Step-1: Find points a and b such that a<b and f(a)⋅f(b)<0.
Step-2: Take the interval [a, b] and
find next value x0=
(𝑎+𝑏)
2
Step-3: Find f(x0) and f′(x0)
x1=x0-
𝑓(𝑋0)
𝑓′(𝑋0)
Step-4: If f(x1)=0 then x1 is an exact root,
else x0=x1
Step-5: Repeat steps 2 to 4 until f(xi)=0 or |f(xi)|≤Accuracy*/
 //printf(" Function= 3*x - cos(x) -1 \n");
 printf(" Function= x^3 - x -1 \n");
 float a,b, fa,fb, x0, x1, f0, f1, g0, e;
 int step = 1, N;
 /* Inputs */
 up:
 printf(" Enter value of a: ");
 scanf("%f", &a );
 printf(" Enter value of b: ");
 scanf("%f", &b);
 fa = f(a);
 fb = f(b);
 if( b <= a || fa*fb >= 0.0)
 {
 printf(" Incorrect Initial Guesses. Put value again correctly.\n");
 goto up;
 }
 printf(" Enter tolerable error: ");
 scanf("%f", &e);
 printf(" Enter maximum iteration: ");
 scanf("%d", &N);
 x0=(a+b)/2;
 /* Implementing Newton Raphson Method */
 printf("\n Step\t\tx0\t\tf(x0)\t\tf'(x0)\t\tx1\t\tf(x1)\n");
 printf(" -------------------------------------------------------------------------\n");
 do
 {
 f0 = f(x0); // f0 is the function value
 g0 = g(x0); //g0 is the differentiation function value
 if(g0 == 0.0)
 {
 printf("\n Mathematical Error.");
 exit(0);
 }
 x1 = x0 - f0/g0; // main equation
 f1 = f(x1);
 if (f1==0.0)
 {
 printf("\n Root is: %f \n", x1);
 printf(" %d\t\t%f\t%f\t%f\t%f\t%f\n",step,x0,f0,g0,x1,f1);
 exit(0);
 }
 printf(" %d\t\t%f\t%f\t%f\t%f\t%f\n",step,x0,f0,g0,x1,f1);
 x0 = x1;
 printf(" -------------------------------------------------------------------------\n");
 step = step+1;
 if(step > N)
 {
 printf("\n Not Convergent.");
 exit(0);
 }
 }
 while(fabs(f1)>e);
 printf("\n Root is: %f \n", x1);
}
