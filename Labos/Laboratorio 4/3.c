#include <stdio.h>
#include <stdlib.h>

void printMatrix(int arr[5][5]);

int main(int argc, char const *argv[])
{
	int matrix[5][5];
	int resultado=0;
	srand(time(NULL));


	//llenando matrix
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			matrix[i][j]=rand() %31+10;
			
		}
	}

	printMatrix(matrix);

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (i==j)
			{
				resultado=resultado+matrix[i][j];
			}
		}
	}

	printf("La suma de la diagonal es de %d\n", resultado);



	return 0;
}

void printMatrix(int arr[5][5]){
	for (int i = 0; i < 5; ++i)
	{

		for (int j = 0; j < 5; ++j)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
}

