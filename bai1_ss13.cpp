#include <iostream>
#include <string.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
char str1[10];
char str2[10];
	
	printf ("enter string: ");
	scanf ("%s",str1);
	
	strcpy (str2,str1);
	strrev (str2);
	if (strcmp(str1,str2)!=0)
	printf ("string is not palindrome");
	else 
	printf ("string is palindrome");
	
	return 0;
}
