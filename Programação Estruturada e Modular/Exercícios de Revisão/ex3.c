#include <stdio.h>

int main()

{	int n, mult=1, soma=0,a;

	printf("\nEntre o numero em decimal: ");

	scanf("%d", &n);

	while( n > 0)

	{	soma = soma + (n%2)*mult;

    a= n%2;

	printf ("\n%d = %d + %d x %d\n",soma,soma,a,mult);

		printf("%d . ", n%2);

		printf("%d\n", mult);

		n= n/2;

		mult = mult * 10;



	}

	printf("\nConversao em binario = %d\n", soma);

	return 0;

}