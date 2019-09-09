#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int fahr;
	for ( fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		printf("%d\t%3.6f\n",fahr, 5.0 * (fahr - 32) / 9.0 );
	}
	return 0;
}