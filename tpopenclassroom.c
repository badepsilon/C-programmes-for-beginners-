#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	printf("=====plus ou moins=====\n");
	printf("le but de jeu c'est de deviner le nombre mystere!!!\n");
	int modedejeu = 0, difficulte = 0, nombreentre = 0, nombrechoisis = 0, continuerpartie = 1, max = 1, nombredecoups = 0;
	const int min = 1;
do
{
	nombredecoups = 0;
	printf("vous choisissez le modedejeu\n");
	printf("1:mode solo\n");
	printf("2:mode multijoueur\n");
	do
	{
		printf("votre choix?\n");
		scanf("%d",&modedejeu);
	}	
	while(modedejeu < 1 || modedejeu > 2);
	switch(modedejeu)
		{
		case 1:
		srand(time(NULL));
		printf("et le jeu commence en mode solo\n");
		break;
		case 2:
		printf("et le jeu commence en mode multijoueur\n");
		printf("entre le nombre a faire deviner a votre adversaire:\n");
		scanf("%d",&nombrechoisis);
		printf("entrer le nombre choisis par votre advairsaire!\n");
		scanf("%d",&nombreentre);
			do
			{
				printf("pas de chance!\n");
				printf("rentrer le nombre mystere\n");
				scanf("%d",&nombreentre);
			}
			while(nombreentre != nombrechoisis);
			printf("vous avez trouve le nombre mystere Bravo!\n");
		break;
		}
	if (modedejeu == 1)
	{
			printf("choisissez le mode de difficulte\n");
			printf("1: niveau facile\n");
			printf("2: niveau moyen\n");
			printf("3: niveau difficile\n");
		do
			{
				printf("votre choix?\n");
				scanf("%d",&difficulte);
			}
		while (difficulte < 1 || difficulte > 3);
			if (difficulte == 1)
			{
				max = 100;
				nombrechoisis = (rand() % (max - min - 1)) + min;
			}
			else if (difficulte == 2)
			{
				max = 500;
				nombrechoisis = (rand() % (max - min + 1)) + min;
			}
			else if (difficulte == 3)
			{
				max = 1000;
				nombrechoisis = (rand() % (max - min + 1)) + min;
			}
		printf("devinez le nombre mystere!\n");
		do
		{
			nombredecoups++;
			printf("quel est le nombre mystere?\n");
			scanf("%d",&nombreentre);
			if ( nombreentre < nombrechoisis)
			{
				printf("c'est plus!\n");
			}
			else if (nombreentre > nombrechoisis)
			{
				printf("c'est moins!\n");
			}
			else
			{
				printf("Bravo!! vous aver trouve le nombre mystere!\n");
			}

		}
		while(nombreentre != nombrechoisis);
	}

			printf("fin du jeu :(\n");
			printf("voulez vous rejouer la parties?\n");
			printf("1: oui\n");
			printf("2: non\n");
			printf("votre choix?\n");
			scanf("%d",&continuerpartie);
}

while (continuerpartie == 1);
	return 0;
}

