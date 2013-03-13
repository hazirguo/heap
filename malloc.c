#include <stdio.h>
#include <stdlib.h>

int main()
{
        char *p1, *p2, *p3, *p4, *p5, *p6, *p7;
        p1 = (char *) malloc (10);
        printf("alloc 10 bytes for p1, and p1 point to %p\n", p1);
	p2 = (char *) malloc (10);
	printf("Also alloc 10 bytes for p2, and p2 points to %p\n", p2);
	p3 = (char *) malloc (4096);
	printf("Then alloc 4K bytes for p3, and p3 points to %p\n", p3);
	p4 = (char *) malloc (10);
	printf("Again alloc 10 bytes for p4, and p4 points to %p\n", p4);
	free(p2);
	p5 = (char *) malloc (5);
	printf("Delete p2, and alloc p5 which points to %p\n", p5);
	p6 = (char *) malloc (0x10);
	printf("alloc only 1 bytes for p6, and p6 points to %p\n", p6);
	p7 = (char *) malloc (0x10);
	printf("alloc 1 bytes for p7, and p7 points to %p\n", p7);
        return 0;
}
