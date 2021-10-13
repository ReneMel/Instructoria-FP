#include <stdio.h>
#include <stdlib.h>

void printArray(int c[], int cant);
int ismayoritary(int array[], int num);

int main(int argc, char const *argv[])
{
	int array[10];
	int num;
	srand(time(NULL));



	//llenando array
	for (int i = 0; i < 10; ++i)
	{
		array[i]=rand()%5;
	}

	printArray(array, 10);

	printf("ingrese numero a buscar: \t");
	scanf("%d",&num);


	if (ismayoritary(array,num)==1)
	{
		printf("Si es un elemento mayoritario el numero %d",num);
	}else{
		printf("no lo es\n");
	}



	return 0;
}

void printArray(int c[], int cant){
	for (int i = 0; i < cant; ++i)
	{
		printf("%d\t", c[i]);
	}
	printf("\n");
}

int ismayoritary(int array[], int num){
	int cont=0;
	int length=10;

	for (int i = 0; i < length; ++i)
	{
		if(num==array[i])
		{
			cont++;
		}
	}

	if (cont>length/2)
	{
		return 1;
	}

	return 0;
}