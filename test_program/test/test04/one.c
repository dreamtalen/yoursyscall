#include <stdio.h>
#include <unistd.h>

#define limit 200000

int main(void)
{
	double i;

	while(1)
	{
		printf("1\n");
		for(i = 0; i < limit; i = i + 0.01);
	}
	return 0;
}
