#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	Array
	
	float math,physics,chimistry,geography;
		math=90;
		physics=100;
		chimistry=80;
		geography=68;
		
	
//	printf("%f %f \n",math,physics);
//	Syntax
//	datatype array_name[]={val1,val2,val3};
	float subject_marks[]={90,100,80};
//	printf("%f\n",subject_marks[0]);
//	printf("%f\n",subject_marks[1]);
//	printf("%f\n",subject_marks[2]);
	
//	int count;
//	for(count=0;count<4;count++){
//		printf("%f\n",subject_marks[count]);
//	}
	printf("%lu\n",sizeof(subject_marks));
	int lenght=sizeof(subject_marks)/sizeof(subject_marks[0]);
	printf("%d\n",lenght);
	
	int count;
	for(count=0;count<lenght;count++)
	printf("%f\n",subject_marks[count]);
	
	return 0;
}
