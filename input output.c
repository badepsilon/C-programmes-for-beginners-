#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	printf("rentrz le mot\n");
	c =getchar();
	printf("le mot est:\n");
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
	}
	return 0;
}
