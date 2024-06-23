#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Lesson 36
//C Enumeration
//	1- Introduction
//	2- Enum Creation
//	3- Accessing the Values
//	4- Changing the Values
//	5- Enum in Switch Statement
enum levelOfUnderstanding{
	LOW=50,
	MED=75,
	HIGH=85
};
int main(int argc, char *argv[]) {
	
	
enum levelOfUnderstanding firstTimeChecking, secondTimeChecking,thirdTimeChecking,fourthTimeChecking;

firstTimeChecking=LOW;
secondTimeChecking=MED;
thirdTimeChecking=HIGH;

//printf("First Time Checking Result= %d\n",firstTimeChecking);
//printf("Second Time Checking Result= %d\n",secondTimeChecking);
//printf("Third Time Checking Result= %d\n",thirdTimeChecking);

switch(fourthTimeChecking){
	
	case 50:
		printf("Result= LOW");
	break;
		case 75:
		printf("Result= MED");
	break;	
	case 85:
		printf("Result= HIGH");
		break;
	default:
		printf("No Matching");
}

	return 0;
}
