#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dice=1;

while(dice<=6){
	if(dice>=6){
		printf("wow! %d\n", dice);
	}
	else if(dice<3){
		printf("oops! %d\n",dice);
	}
	else
	{
		printf("%d\n",dice);
	}
	dice=dice+1;
}

	return 0;
}

