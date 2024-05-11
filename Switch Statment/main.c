#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//Control structure/Condational statement
//if, if...else, else if
//Switch statment
//Syntax Switch

//switch(expression)
//{
//	case 1:
//		block code;
//		break;
//	case 2:
//		block code;
//	break;
	
//	default:
//		block of code;
	
//}

//Real Example
//1-15;
int numberfloor=10;

switch(numberfloor)
{
	case 1:
		printf("you will be directed to 1st floor");
		break;
	case 2:
		printf("you will be redirected to the 2nd floor\n");
		break;
	case 3:
		printf("you will be redirected to the 3rd floor");
		break;
//	case 4:
//	case 5
//	....
//	
//	
//	....
//	case 15:
	
	default:
		printf("wrong input number, reenter the number");
			
}


	return 0;
}
