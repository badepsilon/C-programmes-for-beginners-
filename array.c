#include <stdlib.h>
#include <stdio.h>
 int main(int argc, char const *argv[])
 {
 	int convertion[10];
 	int i;
 	 	for (int i = 0; i < 10; ++i)
 	{
 		convertion[i] = i * 100;	
 	}
 		for (int j = 0; j < 10; ++j)
 		{
 			printf("the distance [%d] in cm aqual %d in m \n",j,convertion[j]);
 		}
 	return 0;
 }