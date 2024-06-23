#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//Lesson 33
//	
//File Handling
//
//In C, you can create, open, read, and write to files by declaring a pointer of type FILE, and use the fopen() function:
//
//FILE *fptr
//
//fptr = fopen(filename, mode);

FILE *myFile;

//File creation
//myFile=fopen("MyFile.txt","w");
//
////writing some piece of text to MyFile
//fprintf(myFile,"First time Text");


myFile=fopen("MyFile.txt","a");

fprintf(myFile,"\nSecond time text");

fclose(myFile);

	
	
	return 0;
}
