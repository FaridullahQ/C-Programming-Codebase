#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//User Input;

//Security Verification;
//	char first_letter_of_user_name;
//	int last_digit_of_pin_code;
//	
//	printf("Enter your first letter of your user name and last digit of pin code: \n");
//	scanf("%c %d",&first_letter_of_user_name, &last_digit_of_pin_code);
//	//	printf("Your Security Verfication has Successfully Done\n");
//	printf("Your Username: %c\n ",first_letter_of_user_name);
//	printf("Last digit of pin code: %d",last_digit_of_pin_code);
	
//String Input
//	char username[15];
//	
//	printf("Enter your user name: \n");
//	scanf("%s",username);
//
//	printf("Your User Name is: %s\n",username);

	char fullname[20];
	printf("Enter your FullName:\n");
	fgets(fullname,sizeof(fullname),stdin);

	printf("Your FullName is: %s\n",fullname);
	return 0;
}
