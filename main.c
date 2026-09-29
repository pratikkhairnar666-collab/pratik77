#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1
int i;

void push(int value)
{
	if(top == SIZE -1){
		printf("Stack is Full(Overflow)!\n")
	}else{
		top++;
		stack[top]= value
		prinrf("%d pushed into the stack.\n",value);
	}
}
