#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//Lesson 31
//C Math Function

//There is also a list of math functions available, that allows you to perform mathematical tasks on numbers.
//To use them, you must include the math.h header file in your program:
//
//1- Square Root: sqrt();
//	printf("%f\n",sqrt(36));
//	float mysquareroot=sqrt(36);
//	printf("%f\n",mysquareroot);
	
//2- Round Number: ceil(); floor();
//	printf("%f\n",ceil(4.554));
//	printf("%f\n",floor(4.554));
//3- Power: pow();
//	printf("%f\n",pow(2,8));
//	printf("%f\n",pow(2,3));
	float mysinangle= sin(90);
	float myzerosinangle= sin(0);
	float mycosangle= cos(90);
	float mytanangle= tan(90);
printf("%f\n",mysinangle); 
printf("%f\n",myzerosinangle); 
printf("%f\n",mycosangle); 
printf("%f\n",mytanangle); 

//some other Math Functions;
//abs(x)	Returns the absolute value of x
//acos(x)	Returns the arccosine of x
//asin(x)	Returns the arcsine of x
//atan(x)	Returns the arctangent of x
//cbrt(x)	Returns the cube root of x
//cos(x)	Returns the cosine of x
//exp(x)	Returns the value of Ex
//sin(x)	Returns the sine of x (x is in radians)
//tan(x)	Returns the tangent of an angle

	return 0;
}
