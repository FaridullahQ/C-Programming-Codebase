#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int i;
	int j;
//	for(i=1;i<3;i++){
//		printf("Afghanistan\n");
//		for(j=1;j<4;j++){
//			printf("Love you\n");
//		}
//	}
	for(i=0;i<110;i+=10){
		if(i==60){
			continue;
		}
		printf("%d\n",i);
	}
	
	return 0;
	
}
