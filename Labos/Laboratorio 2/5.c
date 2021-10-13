#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float tempcelsius, tempfaren;

	printf("Ingresar temperatura en farenheith: ");
	scanf("%f", &tempfaren);

	tempcelsius=(tempfaren-32.0)* 5 / 9;

	printf("temperatura es de: %.2f grados celsius \n", tempcelsius );


	return 0;
}