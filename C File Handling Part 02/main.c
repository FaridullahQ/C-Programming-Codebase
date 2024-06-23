#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	Lesson 34
//File Handling	
//Read a File
//In the previous lessons, we wrote to a file using w and a modes inside the fopen() function.
//
//To read from a file, you can use the r mode:
//
//FILE *fptr;
//
//// Open a file in read mode
//fptr = fopen("filename.txt", "r");
//
//
//Steps for reading a file
//FILE *fptr;
//
//// Open a file in read mode
//fptr = fopen("filename.txt", "r");
//
//// Store the content of the file
//char myString[100];
//
//// Read the content and store it inside myString
//fgets(myString, 100, fptr);
//
//// Print the file content
//printf("%s", myString);
//
//// Close the file
//fclose(fptr);

FILE *myreadFile;

//myreadFile=fopen("ThirdFile.txt","w");
//
//fprintf(myreadFile,"First Line\nSecond Line\nThird Line");
//
//fclose(myreadFile);

myreadFile=fopen("ThirdFile.txt","r");
char myThirdFileString[100];

while(fgets(myThirdFileString,100,myreadFile))
{
	printf("%s",myThirdFileString);
}
fclose(myreadFile);


	return 0;
}
