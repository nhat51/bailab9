#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char name[10][20];
	char *ptr[10];
	int i;
for (i=0;i<5;i++)
{
	printf ("nhap ten con vat thu %d: ",i+1);
	gets(name[i]);
	char* temp;
	temp=(char*)malloc(20*sizeof(char));
	strcpy (temp,"s");
	strcat(name[i],temp);
	ptr[i] = name[i];
}
printf("\n the plural name: \n");
for (i=0;i<5;i++)
{
	printf ("%s\n",ptr[i]);
}


	return 0;
}
