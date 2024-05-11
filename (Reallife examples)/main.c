#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	Real life example in Loop

//	1-Count TO 1000 BY 100
	
//	int count;
//	for(count=0;count<=1000;count+=100){
//		printf("%d\n",count);
//	}
	
//	2-Even Numbers 0-100
//	int count;
//	for(count=0;count<=100;count+=2)
//	{
//		printf("%d\n",count);
//	}
//	3- Mulitiplication 5

//	int count;
//	int multiplay=5;
//	for(count=1;count<=10;count++)
//	{
//		printf("%d * %d = %d\n",count,multiplay,count*multiplay);
//	}
//	4-Dice game emotions
//	Dice 6 Excellent
//	Dice <=2 Oh no!
//	Good!
	int count=1;
	
	while(count<=6){
		if(count==6){
			printf("Excellent= %d\n",count);
		}
		else if (count<=2){
			printf("Oh no!= %d\n",count);
		}
		else
			printf("good= %d\n",count);
	count++;
	}
	
	return 0;
}
