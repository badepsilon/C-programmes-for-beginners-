#include <stdlib.h>
#include <stdio.h>
double convert(int monnais)
{
	return 6.55957 * monnais;
}
int main(int argc, char const *argv[])
{
	int euro = 0;
	printf("rentrez la monnais que vous voullez convertir en francs...");
	scanf("%d", euro);
	printf("apres la conversion le resultat est %lf\n",convert(euro));
	return 0;
}