#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	 /*
	 C DataTypes
	 
	 size, dataformat, formatspecifer, example
	 int
	 2,4 byte- whole number, %d  int age=35;
	 float
	 4 byte - decimal/point, %f float lenght=12.45; 6-7
	 char
	 1 byte - single 'a', '12' %c char beta_symbol='B';
	 double
	 8 Byte	- decimal/point %lf double lenght_of_sea=145.3535 (15)	 
	 Scientific Numbers
	 */
	 /*
	 float scientific_number=345e3;
	 double Scientific_Number= 11E15;
	 
	 printf("%f\n",scientific_number);
	 printf("%f\n",Scientific_Number);
	 
	 //Sizeof Operator
	 
	 printf("%u, Byte\n",sizeof(scientific_number));
	 printf("%u Byte",sizeof(Scientific_Number));
	 */
	 //Type Conversion
	/* 
	 int var1=13;
	 int var2=2;
	 
	 float divsion=var1/var2;
	 printf("%f\n",divsion);
	 
	 //1-implicit (automatic/compiler)
	 
	float number1=12, number2=14;
	printf("%f",number1+number2);
	*/
	
	int listof_things=13;
	int listof_students=2;
	
	float result=(float)listof_things/listof_students;
	
	printf("%f\n",result);
	printf("%.3f\n",result);
	printf("%.1f",result);
	
	
	 
	// 2- Explicit (Manully)
	 
	 
	 
	 
	
	return 0;
}
