#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	Lesson 21:
//		Siminar Participants Ages Calculation
//		1-Average Age
//		2-Lowest Age
//		3-Hightest Age

	int participant_ages[]={12,30,40,15,18,20,120,45,35,10,15,19,60,80,12,43};
	
	int average,sum, count;
	sum=0;
	
	int lenght=sizeof(participant_ages)/sizeof(participant_ages[0]);
	
	for(count=0;count<lenght;count++)
	{
		sum+=participant_ages[count];
	}
	printf("Average Age of Siminar Participant= %d\n",sum/lenght);
	
	
	int lowest_age=participant_ages[0];
	int highest_age=participant_ages[0];
	
	for (count=0;count<lenght;count++)
	{
		if(lowest_age>participant_ages[count])
			lowest_age=participant_ages[count];
		else if (highest_age<participant_ages[count])
				highest_age=participant_ages[count];
	}
	printf("Lowest Age of Siminar Participant= %d\n",lowest_age);
	printf("highest Age of Siminar Participant= %d\n",highest_age);
	
	
	
	return 0;
}
