/*
hacer un arreglo de 10 numeros creados de manera aleatoria,entre 0 y 30, e imprimir los numeros primos que encuentre.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int array[10];
	srand(time(NULL));

	//llenar el array
	for (int i = 0; i < 10; ++i)
	{
		array[i]=rand() % 31;
	}

	//imprimir esta matriz
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\t", array[i] );
	}
	printf("\n");


	// ver si numero es primo o no


	for (int i = 0; i < 10; ++i)
	{
		//
		int m = array[i]/2;
		int flag = 0;

		for (int j = 2; j <=m; ++j)
		{
			if (array[i]%j==0)//no es primo
			{
				flag=1;
			}
		}

		if (flag==0)
		{
			printf("Numero %d  es primo \n", array[i] );
		}

	}

	return 0;
}
