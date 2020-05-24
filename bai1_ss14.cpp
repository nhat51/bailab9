#include <iostream>
#include <string.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str[100], str1[100];
  	int i, j, n;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	j = 0;
  	n = strlen(str);
 
  	for (i = n - 1; i >= 0; i--)
  	{
  		str1[j++] = str[i];
  	}
  	str1[i] = '\0';
 
  	printf("\n String after Reversing = %s", str1);
  	
	return 0;
}
