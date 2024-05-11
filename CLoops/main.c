#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	C loops
	
//	TYPES Loops
//While

//while(condition)
//{
//	//block of code;
//}

//int count=1;
//
//while(count<10)
//{
//	printf("%d Afghanistan\n ",count);
//	count++;
//}

//Do-While
//syntax
//do{
//	//code to be run in itereration form
//}while();

//int count=1;
//
//do{
//	
//	printf("%d- Afghanistan\n",count);
//	count++;
//}while(count<0);

//For Loop

//Syntax
//
//for(experission;experission;experission)
//{
////	block of code;
//}

//int count;
//for(count=1;count<=5;count++)
//{
//	printf("%d- Afghanistan\n",count);	
//}

//nested for loop
//syntax
//outer loop
//for(exp1;exp2;exp3){
//	inner loop
//	for(exp1;exp2;exp3)
//}

int count_outer,count_inner;

//outer loop
for(count_outer=1;count_outer<=10;count_outer++)
{	printf("%d- Afghanistan \n",count_outer);
	for(count_inner=1;count_inner<=3;count_inner++)
	printf("%d- Love you!!\n",count_inner);
}
	return 0;
}
