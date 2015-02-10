#include <stdio.h>
#include <stdlib.h>
// Escreva uma fun��o recursiva que determine a quantidade de bits necess�rio
// para representar um n�mero inteiro n.

int f1(int n) {
 if (n <= 0)
    return 0;
 else if (n==1)
    return 1;
        return (n&1) + f1(n / 2);
}
int main()
{
    int n = 25;

    printf("%d", f1(n));
    return 0;
}
/* &  :  compara os bits entre dois numeros 5&1   0101
                                                  0001
                                                     tem dois iguais, so, this equals 1.*/
