#include <stdio.h>


int main(int argc, char const *argv[])
{
	int pesomunecas=75;
	int pesopayaso=112;

	i5nt cantpayaso, cantmunecas;
	printf("Ïnserte cantidad de payasos: ");
	scanf("%d",&cantpayaso);
	printf("Ïnserte cantidad de muñecas: ");
	scanf("%d",&cantmunecas);

	int pesototal= (cantmunecas*pesomunecas)+(cantpayaso*pesomunecas);

	printf("Peso total del pedido %d kilogramos\n", pesototal	);

	return 0;
}