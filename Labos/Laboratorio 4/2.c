/*
	

*/
#include <stdio.h>

void printArray(int c[],int cant);


int main(int argc, char const *argv[])
{
	int cant=5;


	int pares[5], impares[5];
	int contpares=0, contimpares=0;

	for (int i = 0; i < cant; ++i)
	{
		int num;
		scanf("%d", &num);

		if (num%2==0)
		{
			pares[contpares]=num;
			contpares++;
		}else{
			impares[contimpares]=num;
			contimpares++;
		}

	}

	printf("pares: ");
	printArray(pares, contpares);
	printf("impares: ");
	printArray(impares, contimpares);


	
	return 0;
}


void printArray(int c[], int cant){
	for (int i = 0; i < cant; ++i)
	{
		printf("%d\t", c[i]);
	}
	printf("\n");
}

