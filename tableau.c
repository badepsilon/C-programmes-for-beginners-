#include <stdio.h> //standard library have some fuctions 
#include <stdlib.h>// standard library have some fuctions

int main(int argc, char const *argv[])// int s a data type main is a function
{
	int celi, fahr; // deffining our variables... 
	int step = 20, first = 0, last = 300;// giving our variables values and stocking them 
	fahr = first;
	while(fahr <= last)// function main calls loibrary fuction while
	{
		celi = 5 * (fahr - 32) / 9;// deffining how to cacul the celi
		printf("%d\t%d\n",fahr,celi );// printing the results
		fahr = fahr + step;// the next step
	}

	return 0;
}