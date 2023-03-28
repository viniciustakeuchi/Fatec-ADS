#include <stdio.h>

int main()

{   int N;

    printf("Quantas linhas devo mostrar?");

    scanf("%d", &N);

    int mat[N][N];

    int l, c;

    for(l=0; l<N; l++)

    {   mat[l][0] = 1; 

        mat[l][l] = 1;

    }

    for(l=2; l<N; l++)

    {   for(c=1; c<l; c++)

        {   mat[l][c] = mat[l-1][c] + mat[l-1][c-1];

        }

    }

    for(l=0; l<N; l++)

    {   for(c=0; c<=l; c++)

        {   printf("%5d", mat[l][c]);

        }

        printf("\n");

    }

    return 0;

}

