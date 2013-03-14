#include <stdio.h>
#include <stdlib.h>

int global_init_var = 100;
int global_uint_var; 
char *string = "helloworld";


int main()
{
	static int static_init_var = 50;
	static int static_uinit_var;
	int local_init_var = 10;
	int local_uinit_var;
	void *palloc = malloc(8);
	while(1)
	{}
	return 0;
}
