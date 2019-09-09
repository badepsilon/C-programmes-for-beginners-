#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int choix;
	printf("=== Menu ===\n");
	printf("1. Royal cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big Mac\n");
	printf("Votre choix?\n");
	scanf("%d",&choix);
	switch(choix)
	{
		case 1:
		printf("tu as choisi le menu Royal cheese\n");
		break;
		case 2:
		printf("tu as choisi le menu Mc Deluxe\n");
		break;
		case 3:
		printf("tu as choix le menu Mc Bacon\n");
		break;
		case 4:
		printf("tu as choisi le menu Big Mac\n");
		break;
		default:
		printf("vous avez rentrz numero pas correct , vous ne mangerez rien!!\n");
		break;
	}
	return 0;
}
