/*
94. Hacer un array 4x3 que acepte números enteros ingresados por el usuario. Al final, debe mostrar la suma de todos los números que estén en una fila par.
*/


#include <stdio.h>


int main(int argc, char const *argv[])
{
	int array[4][3];
	int suma=0;

	//llenar
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("Ingrese un numero en posición [%d][%d]\n",i+1, j+1 );
			scanf("%d", &array[i][j]);
		}
	}

	// imprimir
		for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}

	for (int i = 1; i < 4; i+=2)//las filas pares
	{
		for (int j = 0; j < 3; ++j)
		{
			suma=suma+array[i][j];
		}
	}


	printf("suma es igual a %d\n", suma );

	return 0;
}