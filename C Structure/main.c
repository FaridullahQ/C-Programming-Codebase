#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct MycarStructure{
	int year;
	char model;
	char brand[20];
};

int main(int argc, char *argv[]) {
//	Lesson 35
//	C Structure
//	1- How to create?
//	2- How to access structure?
//	3- How to Access structure members?
//	4- Strings in Structure
//	5- Modify Structure value
struct MycarStructure MyFirstCar={2025, "Q", "Toyta"};
struct MycarStructure MySecondCar={2026,"Y","Honda"};



	
//	MyFirstCar.year=2024;
//	MyFirstCar.model='X';
////	MyFirstCar.brand[20]="Crolla";
//	
//	strcpy(MyFirstCar.brand,"Crolla");
//	
//	MyFirstCar.year=2023;
//	MyFirstCar.model='W';
//	
	printf("Year %d\n",MyFirstCar.year);
	printf("Model %c\n",MyFirstCar.model);
	printf("Brand %s\n",MyFirstCar.brand);
	
	
	printf("Year %d\n",MySecondCar.year);
	printf("Model %c\n",MySecondCar.model);
	printf("Brand %s\n",MySecondCar.brand);
	

	return 0;
}
