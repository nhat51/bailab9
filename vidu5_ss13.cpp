#include <iostream>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number;
	int *ptr;
	int i;
	printf ("ban muon luu bao nhieu so nguyen? ");
	scanf ("%d",&number);
	ptr = (int* )malloc (number*sizeof(int));

	if (ptr!=NULL)
	{
		for (i=0; i<number;i++)
		{
			*(ptr+i)=i;
		}
	for (i=number;i>0;i--)
	{ 
	printf ("%d\n",*(ptr+(i-1)));
}
free(ptr);
return 0;
}
else 
{
	printf ("\n cap phat bo nho that bai-khong du bo nho\n");
}

	
	
	return 1;
}
