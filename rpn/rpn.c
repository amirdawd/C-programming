#include <stdio.h>
#include <stdlib.h>
#define N		(10)
int stack[N];
int line = 0;

int calculate(char input){
	switch (input)
	{
	case '+':

		break;
	
	default:
		break;
	}
}
int main(void)
{
	/* check for errors*/
		/* 
		1. ivalid charachters such as !
		2. out of space when pushing a nr
		3. zero or 1 number when poping 
		4. divide by zero
		5. empty stack 
		6. adding more than two after new line chatachter?
		Terminate the program using ctr+D i.e. EOF
		*/
	int input;
	int index;
	while((input = getchar()) != EOF){
		if( input >= '0' && input <= '9'){
			index = 0;
			while(input >= '0' && input <= '9'){
			if(index < 10){
				stack[index] = input;
				index++;
			}
			else{
				printf("Max space exceeded.");
				return 0;
			}
			}
			
		

		}
		
	}
	return 0;
}



