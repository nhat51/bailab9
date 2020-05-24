#include <iostream>
#include <malloc.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int *p,n,i,j,temp;
	printf ("nhap vao so phan tu trong mang: ");
	scanf ("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;++i)
	{
		printf ("\n nhap vao phan tu thu %d: ",i+1);
		scanf ("%d",p+i);
	}
	for (i=0;i<n-1;++i)
		for (j=i+1;j<n;++j)
		if (*(p+i)>*(p+j))
	{
		temp=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=temp;
		
	}
	for(i=0;i<n;i++)
	printf ("%d\n",*(p+i));
	return 0;
}
