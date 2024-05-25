#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	27 Lesson
//  C Pointers and Arrays
//	How to use pointers with array?
//	What is the relationship between them?
//	Change the value of array though pointer.

	int mynumberlist[4]={10,20,30,40};
//	printf("Zero Index: %d\n",mynumberlist[0]);
//	printf("Zero Index: %d",mynumberlist[3]);
//	
//	int count;
//	printf("My List of Numbers:\n"); 
//	printf("My memory addresses list:\n"); 
//	for(count=0;count<4;count++)
//	printf("%d\n",mynumberlist[count]);

//	printf("Zero index/First Element: %p\n",&mynumberlist[0]);
//	printf("%p\n", &(mynumberlist));
//	int* my_pointer=&mynumberlist;
//	printf("%p\n",my_pointer);
//	printf("%p\n",(my_pointer+1));
	int count_pointer;
	for(count_pointer=0;count_pointer<4;count_pointer++)
		printf("%p\n",&(my_pointer+count_pointer));

	
	
	
	
	
	
	return 0;
}
