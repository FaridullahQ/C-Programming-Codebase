#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	26 Lesson
//	C Memory Location and Pointers
	
//	int myid=10;
//	printf("%p \n",&myid);// Memory address
//	printf("%d",myid);// variable value
//	
//	Pointer
	
	int myid=100;
	
//	int* myid_pointer=&myid;

	int *myid_pointer=&myid;
	printf("myid memory address: %p\n",myid_pointer);
	printf("myid memory address: %p\n",&myid);
	printf("myid value: %d",*myid_pointer);
	return 0;
}
