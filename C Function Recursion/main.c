#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sum(int mynumber);
int main(int argc, char *argv[]) {

// Lesson 32
// C Recursion

//Recursion
//Recursion is the technique of making a function call itself. 
//This technique provides a way to break complicated problems down into simple problems which are easier to solve.
//Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.z
int summition_of_mynumbers=sum(10);
printf("Result =: %d\n",summition_of_mynumbers);

	return 0;
}

int sum(int mynumber){
	if(mynumber>0){
		return mynumber + sum(mynumber-1);
	}
	else{
		return 0;
	}
}
