#include <stdio.h>
#include <stdlib.h>
  int main(int argc, char const *argv[])
  {
  	int i;
  	int hazzard[5] = {1,13,64,123,1};
  	int multiplication;
      	for  (int i = 0; i < 5; ++i)
      	{
          multiplication = hazzard[i] *2;
      		printf("hazzard de %d est %d\n",i,multiplication);
      	}
  	return 0;
  }