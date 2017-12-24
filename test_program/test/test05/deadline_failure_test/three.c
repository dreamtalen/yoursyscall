#include <stdio.h>
#include <unistd.h>

#define limit 200000

int main(void)
{
	double i;
	int j = 0;

	yoursyscall(7, 10);

	while(1)
	{
		printf("333\n");
		for(i = 0; i < limit; i = i + 0.01);
		if(++j == 4) break;
	}
	return 0;
}
