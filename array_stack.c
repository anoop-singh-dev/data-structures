#include <stdio.h>
#define MAX 10
#include <stdlib.h>
int top = -1;
void push(int stack[],int value){
 	if(top < MAX){
 		top = top + 1;
 		stack[top] = value;
 	}
 	else{
 		printf("the stack is full can not push\n");
 		exit(0);
 	}
 }
void display(int stack[]){
	int i =0;
	printf("current stack is..\n");
	for(i=0;i<=top;i++){
		printf("%d\n",stack[i]);
	}
}
void pop(int stack[],int *value){
	if(top >= 0){
		*value = stack[top];
		top = top - 1;
	}
	else{
		printf("the stack is empty\n");
		exit(0);
	}
}
int main(){
	int stack[MAX]; 
	int value; char c;
	do{
		printf("enter a for push, b for pop, n for exit\n");
		scanf("%c",&c);
		switch(c){
			case 'a': printf("enter element for appending\n");
                      scanf("%d",&value);
					  push(stack,value);
					  break;
			case 'b': pop(stack,&value);
					  printf("the value poped is %d\n",value);
					  break;
		}
	}while(((c!='a')||(c!='b'))&&(c!='n'));
	display(stack);
	

return 0;
}
