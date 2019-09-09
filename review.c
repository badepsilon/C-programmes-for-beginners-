#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int age , dommage = 1;
	float taille;
	long code;
	while( dommage == 1)	
		printf("hello world! now we will revise all what u learned. conditions,boucles,printing,scaning,showing the informations,operations\n");
		printf("so we will beging with printing and scaning\n");
		printf("rentrez votre age:");
		scanf("%d",&age);
		if (age < 18)
		{
			printf("dommage vous etes mineur\n");
		}	
		printf("clique sur 2 pour quitter\n");
			scanf("%d",&dommage);

		printf("rentrez votre taille:");
		scanf("%f",&taille);
		printf("mtn rentrez votre code\n");
			scanf("%ld",&code);
					while (code != 1337)
				{
					printf("votre code est incorrect\n");
					printf("essay autre fois:\n");
					scanf("%ld",&code);
				}
		printf("ohhh Hatime te donne la permition de rentrez\n");


	return 0;
}