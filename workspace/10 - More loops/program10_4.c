#include <stdio.h>

int main()
{
	int count;

	printf("Number of bottles: \n");
	scanf("%d", &count);

	do
	{
		printf("%d bottles on the wall!\n", count);
		count --;
	}		
		while (count > 0);

	printf("Done.\n");
	return 0;
}


