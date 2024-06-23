#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Function Declartion/Function Creation
int sum(int x,int y);

int main(int argc, char *argv[]) {

//function call
printf("%d\n",sum(10,20));

int result=sum(30,40);

printf("%d\n",result);	
	
	return 0;	
}

//function Defination
int sum(int x,int y){
	
	return x+y;
}
