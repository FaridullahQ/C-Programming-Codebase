#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	20 Lesson
//	C Multi Dimentional Array
//	
//	Row
//	Column
//	
//	Two Dimentional Array 2D
//	Matrix
//	
//	Syntax
//	Datatype array_name[R][C]={{Val1,va2,va3},{val4,va5,v6}};
	
	int matrix[2][3]={{1,4,2},{3,6,8}};
	
//	printf("%d\n",matrix[0][0]);//1
//	printf("%d\n",matrix[0][1]);//4
//	printf("%d\n",matrix[0][2]);//2
//	printf("%d\n",matrix[1][0]);//3
//	printf("%d\n",matrix[1][1]);//6
//	printf("%d\n",matrix[1][2]);//8
	
	int count_row,count_column;
	for(count_row=0;count_row<2;count_row++){
		for(count_column=0;count_column<3;count_column++)
			printf("%d\n",matrix[count_row][count_column]);
	}
		
	
	
	return 0;
}
