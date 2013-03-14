#include <stdio.h>
#include <stdlib.h>

unsigned int maximum = 0;
unsigned int base = 0;

int main()
{
	unsigned int blocksize[] = {1024*1024, 1024, 1};
	int i, count;
	for(i=0; i<3; i++)
	{
		for(count=1; ;count++)
		{
			void *block = malloc(base + blocksize[i]*count);
			if (block)
			{
				maximum = base + blocksize[i] * count;
				free(block);
			}
			else
			{
				break;
			}
		}
		base = maximum;
	}
	printf("maximum malloc size = %u bytes\n", maximum);
	return 0;
}
