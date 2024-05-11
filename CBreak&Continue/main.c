#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	C Programming:
//		Break and Continue;

//	break;
	
//	int count;
//	for(count=1;count<=10;count++)
//	{	if(count==4){
//		break;
//	}
//	printf("%d\n",count);
//		
//	}

//	Continue

int count;
for(count=0;count<=110;count+=10){
	
	if(count==60)
	{
//		continue;
		break;
	}
	printf("%d\n",count);
}

	
	return 0;
}
