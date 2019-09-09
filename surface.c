#include <stdio.h>
#include <stdlib.h>
 
 double surface(double longueur ,double largueur);

 int main(int argc, char const *argv[])
 {
 	printf("la surface d'un caree de 4cm de longueur et 3.2cm de largueur  sa surface est%f\n",surface(4,3.2));
 	return 0;
 }

	 double surface(double longueur ,double largueur);
	 {
	 	return longueur * largueur;
	 }