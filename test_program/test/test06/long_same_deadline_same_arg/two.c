#include <stdio.h>
#include <unistd.h>

#define limit 200000

int main(void)
{
	double i;

	yoursyscall(2, 10000);

	while(1)
	{
		printf("22\n");
		for(i = 0; i < limit; i = i + 0.01);
	}
	return 0;
}
