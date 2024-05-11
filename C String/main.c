#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//		22Lesson:
//			C String
		char greeting[]="Salam Alikum";
		
//		printf("%s\n",greeting);
//		printf("%c\n",greeting[0]);
//		printf("%c\n",greeting[6]);

		int count;
		for(count=0;count<12;count++)
		printf("%c",greeting[count]);
		
		char mymessage[]="welcome to Stepstotechpashto Youtube Channel";
		char my_new_message[]={'W','T','S','T','T','P','Y','C'};
		
		printf("%s\n",mymessage);
		printf("%s\n",my_new_message);
	return 0;
}
