/*
	Crear un programa que calcule el valor determinante de una matriz 3x3.
*/


#include <stdio.h>


void printMatrix(int arr[3][3]);

int main(int argc, char const *argv[])
{
	int array[3][3];

	int transposedarray[3][3];

for (int i = 0; i < 3; ++i)
{
	for (int j = 0; j < 3; ++j)
	{
		array[i][j]=3*i;
	}
}

	printf("Matriz normal:\n");	
	printMatrix(array);

for (int i = 0; i < 3; ++i)
{
	for (int j = 0; j < 3; ++j)
	{
		transposedarray[j][i]=array[i][j];
	}
}

	printf("Matriz Transpuesta:\n");
	printMatrix(transposedarray);

	return 0;
}




void printMatrix(int arr[3][3]){
	for (int i = 0; i < 3; ++i)
	{

		for (int j = 0; j < 3; ++j)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
}

