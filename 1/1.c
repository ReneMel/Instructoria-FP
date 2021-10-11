/*
93. Hacer una array unidimensional que acepte ocho números enteros. Luego le pregunte al usuario que ingrese un número a buscar, implementar una función 
que busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso contrario, retornar falso.
*/



#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool buscarNumero(int array[], int num);

int main(int argc, char const *argv[])
{
	int array[8];
	int num;
	srand(time(NULL));

	// llenar con numeros aleatorios
	for (int i = 0; i < 8; ++i)
	{
		array[i]= rand() % 11; // 1 al 10
	}

	printf("inserte un numero al buscar: ");
	scanf("%d", &num);

	if (buscarNumero(array, num))
	{
		printf("si esta el numero en nuestro arreglo\n");
	}else{
		printf("el numero no existe\n");
	}


	return 0;
}



bool buscarNumero(int array[], int num){
	for (int i = 0; i < 8; ++i)
	{
		if (array[i]==num)
		{
			return true;
		}
	}
	return false;	
}