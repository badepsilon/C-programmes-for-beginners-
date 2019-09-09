#include<unistd.h>

char putchar(char c)
{
	write(1, &c, 1);
}
int main()
{
	putchar('hatim');
	return(0);
}
