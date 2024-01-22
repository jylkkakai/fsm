#include <stdio.h>

// Simple fsm lock. Opens with 3782

enum states{
	LOCKED,
	FIRST,
	SECOND,
	THIRD,
	UNLOCKED
};


int main(){

	enum states current_state = LOCKED;
	enum states next_state = LOCKED;
	printf("Hello World!\n");

	char input = '0';

	while(input != 'q'){
		printf("\n> ");
		scanf(" %c", &input);

		switch(current_state){
			case LOCKED:
				if(input == '3'){
					next_state = FIRST;
					printf("CS = %d NS = %d\n", current_state, next_state);
				}
				else {
					next_state = LOCKED;	
					printf("CS = %d NS = %d\n", current_state, next_state);
				}
				break;
			case FIRST:
				if(input == '7'){
					next_state = SECOND;
					printf("CS = %d NS = %d\n", current_state, next_state);
				}
				else {
					next_state = LOCKED;	
					printf("CS = %d NS = %d\n", current_state, next_state);
				}
				break;
			case SECOND:
				if(input == '8'){
					next_state = THIRD;
					printf("CS = %d NS = %d\n", current_state, next_state);
				}
				else {
					next_state = LOCKED;	
					printf("CS = %d NS = %d\n", current_state, next_state);
				}
				break;
			case THIRD:
				if(input == '2'){
					next_state = UNLOCKED;
					printf("CS = %d NS = %d\n", current_state, next_state);
				}
				else {
					next_state = LOCKED;	
					printf("CS = %d NS = %d\n", current_state, next_state);
				}
				break;
			case UNLOCKED:
				if(input == '0'){
					next_state = LOCKED;
					printf("CS = %d NS = %d\n", current_state, next_state);
				}
				else {
					next_state = UNLOCKED;	
					printf("CS = %d NS = %d\n", current_state, next_state);
				}
				break;



		}
		current_state = next_state;
		printf("CS = %d NS = %d\n", current_state, next_state);

	}


	return 0;


}

