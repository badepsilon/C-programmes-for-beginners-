#include <stdio.h>
#include <stdlib.h>
 
 int main(int argc, char const *argv[])
 {
 	int c,nl;
 	printf("je vais essaie de poser un programme qui peut calculer combien de lignes\n");
 	c = getchar();
 	while((c = getchar()) != EOF)
 		if (c == '\n')//the '' "single quotes" represents an integercalue equal the numirical value of the character. 
 	++nl;
 	printf("%d\n",nl);
 	return 0;
 }