#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int n1,n2,n3;
	printf("inserte nuemro 1: ");
	scanf("%d",&n1);

	printf("inserte numero 2: ");
	scanf("%d",&n2);

	printf("La suma es de%d\n",n1+n2 );

	printf("inserte numero 3: ");
	scanf("%d",&n3);

	printf("La suma es de%d\n",(n1+n2)*n3 );


	return 0;
}