
#include <stdio.h>

int ex1()

{   int n, i, soma = 0;

    printf("Entre com o valor de n:");

    scanf("%d", &n);

    

    for(i=1; i<n; i++)

    {   if( n%i == 0 ) //n é divisível por i

        {   soma = soma + i;

        }

    }



    if( soma == n )

    {   printf("\n%d é perfeito\n", n);

    }

    else

    {   printf("\n%d não é perfeito\n", n);

    }

    return 0;

}

