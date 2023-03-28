#include <stdio.h>

int main()

{   int seq1[] = { 1, 1, 2, 3, 4, 8, 9 };

    int seq2[] = { 1, 3, 5, 7, 10 };

    int N1 = 7, N2 = 5;

    int N3 = N1 + N2;

    int seq3[N3]; //sequência com repetições

    int seq4[N3], N4=0; //sequência sem as repetições

    int i=0, j=0, k=0;

    

    while(i<N1 && j<N2)

    {   if(seq1[i] < seq2[j])

        {   seq3[k] = seq1[i];

            i++;

            k++;

        }

        else

        {   seq3[k] = seq2[j];

            j++;

            k++;

        }

        //if(seq1[i] < seq2[j]) seq3[k++] = seq1[i++];

        //else seq3[k++] = seq2[j++];

    }

    

    if(i >= N1) //a sequência 1 que terminou    

    {   for( ; j<N2; j++, k++)

            seq3[k] = seq2[j];

    }

    else //a sequência 2 que terminou 

    {   for( ; i<N1; i++, k++)

            seq3[k] = seq1[i];

    }



    //imprimindo a seq3 (com repetições)

    printf("Sequência 3 (com repetições):\n");

    for(k=0; k<N3; k++)

        printf("%d ", seq3[k]);

    printf("\n");



    seq4[0] = seq3[0];

    N4 = 1;

    for(k=1; k<N3; k++)

    {   if(seq3[k] != seq4[N4-1])

        {   seq4[N4] = seq3[k];

            N4++;

        }

    }

    

    //imprimindo a seq4 (sem repetições)

    printf("Sequência 4 (sem repetições):\n");

    for(k=0; k<N4; k++)

        printf("%d ", seq4[k]);

    printf("\n");



    return 0;

}

