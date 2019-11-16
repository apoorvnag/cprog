#include <stdio.h>
void menu();
void print(int[], int);
void push(int[], int);
int main(int argc, char const *argv[])
{
	int stack[5];
	printf("Enter the elements of stack\n");
	int ch;

	int counter = 0;
	do{
		switch(ch){
			case 1: 
				push(stack, counter);
				break;
			case 2: 

				break;
			case 3:
				printf("Matched\n");
				print(stack, counter);
				break;
			default:
				ch=0;
		}
		
		menu();
		scanf("%d", &ch);
	}while(ch != 0);

	return 0;
}

void push(int stack[], int counter){
	printf("Enter Element\n");
	int num=0;
	scanf("%d", &num);
	stack[counter] = num;
	++counter;
}

void print(int stack[], int counter){
	printf("The elements of stack are\n");
	for (int i=0;i<counter;i++)
	{
		printf("%d\n", stack[i]);
	}
}

void menu(){
	printf("===========================\n");
	printf("\nEnter your choice\n");
	printf("0. Terminate/Exit\n");
	printf("1. Push element\n");
	printf("2. Pop element\n");
	printf("3. Display Stack\n\n");
}
