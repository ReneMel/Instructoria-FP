#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	float radio=5.6;
	float pi=3.14;


	//area
	float area = pi * pow( radio, 2 );
	printf("El area es de %f\n", area );

	//volumen 
	float volumen= (4/3)*pi*(pow(radio,3));
	printf("El volumen es de %f\n", volumen);



	
	return 0;
}