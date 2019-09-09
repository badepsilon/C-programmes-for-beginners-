#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int code;
	printf("rentreez votre code\n");
	scanf("%d",&code);
	while (code != 1337)
{
    printf("code est incorrecte!\n");
    printf("rentreez votre code\n");
	scanf("%d",&code);

}
	printf("bienvenue hatim\n");
	
	return 0;
}