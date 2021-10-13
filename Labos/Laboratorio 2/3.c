#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float kilometros, galones, consumo;

	printf("\nIngrese cantidad de kilometros recorridos: " );
	scanf("%f", &kilometros);
	printf("\nIngrese cantidad de galones consumidos: " );
	scanf("%f", &galones);

	consumo= galones/kilometros;


	//%0.2f -> cuatro digitos después de el punto 
	printf("El vehiculo ha consumido %0.2f galones en %0.2f kilometros \n ", consumo, kilometros );
	

	return 0;
}