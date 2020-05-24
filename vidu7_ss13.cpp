#include <iostream>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int *a,i,n,sum=0;
	printf ("\n %s%s","an array will be created dynamically. \n\n","input an array size n fllowed by intergers: ");
	scanf ("%d",&n);
	a= (int*) calloc (n,sizeof(int));
	for (i=0;i<n;i++) //allocate space
	{
		//get value for each element
		printf ("enter %d values:  ",n);
		scanf ("%d",a+i);
		
	}
	//sum the value
	for (i=0;i<n;i++)

	sum+= a[i];
	free(a);
//prunt the number and sum
	printf ("\n%s%7d\n%s%7d\n\n","number of elements:",n,"sum of the elements: ",sum);
	return 0;
}
