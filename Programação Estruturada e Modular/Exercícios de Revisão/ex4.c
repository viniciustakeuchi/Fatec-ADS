#include <stdio.h>

int main()

{	int vet[]={5, 2, 2, 3, 4, 4, 4, 4, 1, 1};

	int soma=1, tam=10, i;

	for(i=1; i<tam; i++)

	{	//se o elemento da posição i for diferente

		//do elemento anterior, conto mais um grupo

		if(vet[i] != vet[i-1])

			soma = soma + 1;

	}

	printf("\nHa %d grupos de elementos repetidos\n", soma);

	return 0;

}

