#include <stdio.h>
#include <stdlib.h>

#define capacity 3
int stack[capacity];
int top = -1;

void push(int x){
    if(top<capacity-1){
        top=top+1;
        stack[top]=x;
        printf("Added : %d\n",x);
    }else{
        printf("No Space\n");
    }
}

int pop(){
    if(top>=0){
        int val = stack[top];
        top=top-1;
        return val;
    }
    printf("Empty Stack\n");
}

int peek(){
    if(top>=0){
        return stack[top];
    }
    printf("Empty stack\n");
}
int main()
{
    printf("Stack in Array : \n");
    peek();
    push(10);
    push(20);
    push(30);
    printf("pop stack : %d\n",pop());
    push(40);
    printf("peek stack : %d\n",peek());
    push(50);
    return 0;
}
