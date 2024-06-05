#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	27 Lesson
//  C Pointers and Arrays
//	How to use pointers with array?
//	What is the relationship between them?
//	Change the value of array though pointer.
	
	int mysubjectmarks[4]={70,80,90,100};
	
//	printf("%d\n",mysubjectmarks[0]);
//	printf("%d\n",mysubjectmarks[3]);
	
//	int count;
//	for(count=0;count<4;count++)
//		printf("%d\n",mysubjectmarks[count]);
	
//	
//	int address_count;
//	for(address_count=0;address_count<4;address_count++)
//	printf("%p-%d \n",&mysubjectmarks[address_count],mysubjectmarks[address_count]);
	
//	printf("%d\n",mysubjectmarks[0]);	
//	printf("%p\n",&mysubjectmarks[0]);
//		
//	printf("%p\n",&mysubjectmarks);	
	
	int* mysubjectmarks_pointer=&mysubjectmarks;
	printf("%d",*mysubjectmarks_pointer);
	*mysubjectmarks=10;
	printf("%d",mysubjectmarks[0]);
	
	
	

	return 0;
}
