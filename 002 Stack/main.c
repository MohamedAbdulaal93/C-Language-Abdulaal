#include<stdio.h>
#include<stdlib.h>
typedef enum {False=0,True=1}bool;
#define STACK_LIMIT 8
int stack_top = -1;

int stack[STACK_LIMIT];

bool isFull(){
    if(stack_top == STACK_LIMIT){
        return True;
    }else{
    return False;
    }
}
bool isEmpty(){
    if(stack_top == -1){
        return True;
    }else{
    return False;
    }
}

void push(int data){
    if(isFull()){
        printf("Stack is Full");
    }else{
        stack_top++;
        stack[stack_top]=data;
    }
}

int pop(){
    if(isEmpty()){
        printf("Stack is Empty");
    }else{
        int data = stack[stack_top];
        stack_top--;
        return data;
    }
}

int peek(){
    return stack[stack_top];
}

// Program to create a simple linked
// list with 3 nodes
int main()
{
    push(5);
    push(10);
    push(20);
    int b = pop();
    printf("%d",b);

    return 0;
}

