#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int var =500,*ptr_var;
	ptr_var =&var;
	printf ("the value %d is store at adress: %u",var,&var);
	printf ("\n the value %u is stored at adress:%u ",ptr_var,&ptr_var);
	printf ("\n the value %d is stored at address:%u",*ptr_var,ptr_var);
	return 0;
}
