#include <stdio.h>

void mcd(){
	int numero, residuo, mcd;
    int i, n;

    printf("\n\n\tIngrese la cantidad de numeros: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\tNumero %d: ", i);
        scanf("%d", &numero);

        if (i == 1)
        {
            mcd = numero;
        }
        else
        {
            do
            {
                residuo = mcd % numero;
                mcd = numero;
                numero = residuo;
            } while (residuo != 0);
        }
    }

    printf("\nEl mcd es: %d\n", mcd);

    getchar();
    getchar();
}