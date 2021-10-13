#include <stdio.h>
#include <stdlib.h>

void printMatrix(int arr[5][5]);

int main(int argc, char const *argv[])
{
	int matrix[5][5];
	int matrix2[5][5];
	int matrixsum[5][5];
	srand(time(NULL));

	//llenando matrix
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			matrix[i][j]=rand()%20+11;
			matrix2[i][j]=rand()%10;
		}
	}

	printf("Matriz 1\n");
	printMatrix(matrix);
	printf("Matriz 2\n");
	printMatrix(matrix2);


	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			matrixsum[i][j]=matrix[i][j]+matrix2[i][j];
		}
	}

	printf("matriz sumada\n");
	printMatrix(matrixsum);

	return 0;
}

void printMatrix(int arr[5][5]){
	for (int i = 0; i < 3; ++i)
	{

		for (int j = 0; j < 3; ++j)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
}

