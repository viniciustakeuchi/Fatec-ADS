#include <stdio.h>

int main()

{	int n, mult=1, soma=0;

	printf("\nEntre o numero em binario: ");

	scanf("%d", &n);

	while( n > 0)

	{	soma = soma + (n%10)*mult;

		printf("%d . ", n%10);

		printf("%d\n", mult);

		n= n/10;

		mult = mult * 2;

	}

	printf("\nConversao em decimal = %d\n", soma);

	return 0;

}

