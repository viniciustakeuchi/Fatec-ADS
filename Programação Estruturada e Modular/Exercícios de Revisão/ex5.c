#include <stdio.h>

int main()

{	int vet[]={5, 10, 3, 2, 4, 7, 9, 8, 5}, N=9;

	//int vet[]={10, 8, 7, 5, 2}, N=5;

	int cont=1, max=1, i;

	for(i=1; i<N; i++)

	{	if(vet[i] > vet[i-1]) cont++;

		else cont = 1;



		if(cont > max) max = cont;

	}



	printf("\nTamanho maximo crescente da sequencia = %d\n", max);

	return 0;

}
