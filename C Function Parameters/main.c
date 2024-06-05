#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//	void showMeName(char name[], int age){
//		printf("%s\n, Your age is: %d ",name,age);
//		
//	}

	void showMeMyMarks(int mySubjectMarks[5]){
		
		int count;
		for(count=0;count<5;count++)
		printf("%d\n",mySubjectMarks[count]);
	}

int main(int argc, char *argv[]) {
//	Lesson: 29
//	C Function Parameters
	
//	Syntax
//	Data Type FunctionName(p1,p2,p3,p4...pn){
//	}
//	showMeName("Ali");
//	showMeName("Karim");
//	showMeName("Farhad",40);
	
	int mySubjectMarks[5]={70,80,90,50,100};
	
	showMeMyMarks(mySubjectMarks);
	
	return 0;
}
