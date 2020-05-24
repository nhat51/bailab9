#include <iostream>
#include <stdlib.h>


int main(int argc, char** argv) {
	int *ptr;
	int i;
	ptr=(int*)calloc (5,sizeof(int*));
	if (ptr!=NULL)
	{
		*ptr=1;
		*(ptr+1) = 2;
		ptr[2] = 4;
		ptr[3] = 8;
		ptr[4] = 16;
		/* ptr[5] = 32; wouldn't assign anything */
		ptr = (int *)realloc(ptr,7*sizeof(int));
		if (ptr!=NULL)
		{
			printf ("now allocating more memory. . . \n");
			ptr[5] = 32;
			ptr[6] = 64;
			for (i=0;i<7;i++)
			{
				printf ("ptr[%d] holds %d\n",i,ptr[i]);
			}
		realloc(ptr,0); //same as free(ptr); 
		return 0;
	}
		else
	{
	
	printf ("not enough memory - realloc failes \n");
	return 1;
	}
}
else 
{
	printf ("not enough memory - calloc failed \n");
	return 1;
}
	return 0;
}
