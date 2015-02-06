#include <stdio.h>
#include <stdlib.h>

int largest(int n[], int qtd)
{
    int l;

    if (qtd == 1)
            return n[0];
    else
    {
        l = largest(n, qtd-1);
            if ( n[qtd-1] > l)
                l = n[qtd-1];

    /*
        n[] = { 5, 9, 13, 8, 2, 7};

        largest(n, qtd-1)
            6-1 = 5
            5-1 = 4
            4-1 = 3
            3-1 = 2
            2-1 = 1 (base case)
                     if (qtd == 1)
                        return n[0];
                    n[0] = 5;
           l = largest(n, qtd-1); (this is the n[0])
            if ( n[qtd-1] > l)
                 l = n[qtd-1];

                n[1] > l? ( 9 > 5 ?) YES
                so
                l = n[qtd-1](n[1] = 9);

                n[2] > l? (13 > 9?) YES
                so
                l = n[2] (13)

                n[3] > l ?  ( 8 > 13?) NO
                so
                l = 13

                And so on. It will return 13.
         */
    }
            return l;

}
int main()
{
    int n[] = { 5, 9, 13, 8, 2, 7};
    int qtd = 6;

    printf("The largest number is: ");

    printf("%d", largest(n, qtd));

    return 0;
}
