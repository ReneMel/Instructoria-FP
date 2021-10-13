#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int lado=6;

	int area= pow(lado, 2);
	int volumen = pow(lado,3);

	printf("El area es de: %d\n", area);
	printf("El volumen es de: %d\n", volumen);

	return 0;
}