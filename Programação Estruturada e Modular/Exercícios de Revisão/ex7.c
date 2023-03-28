#include <stdio.h>

int main()

{   int num1[] = {8, 2, 4, 3, 4, 2, 5, 1};

    int num2[] = {3, 3, 7, 5, 2, 3, 3, 7};

    int n = 8;

    int soma[n+1];

    int i, vaium = 0;

    

    for(i = n-1; i >= 0; i--)

    {   soma[i + 1] = (num1[i] + num2[i] + vaium) % 10;

        vaium = (num1[i] + num2[i] + vaium) / 10;

    }

    

    soma[0] = vaium;

    

    for(i=0; i < n+1; i++)

        printf("%d ", soma[i]);

        

    return 0;

}

