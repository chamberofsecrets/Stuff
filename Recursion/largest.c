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
            now it goes up again... 
            2
            3
            4
            6
            5
            
            Starting with the "2":
                    2
            if ( n[qtd-1] > l)
            if(n[2-1] > l)
            if(n[1] > l) // n[1] = 9,  l = n[0] = 5
            9 > 5? YES
                so,            
                 l = n[qtd-1];
                now l = n[1] = 9
                
            Now with the "3":
                    3
            if ( n[qtd-1] > l)
            if(n[3-1] > l)
            if(n[2] > l) // n[2] = 13,  l = n[1] = 9
            13 > 5? YES
                so,            
                 l = n[qtd-1];
                now l = n[2] = 13
                
            Now with the "4":
                    4
            if ( n[qtd-1] > l)
            if(n[4-1] > l)
            if(n[4] > l) // n[4] = 8,  l = n[2] = 13
            8 > 13? NO!
                so,            
                 l continues to be n[2]
                 
                and so on..
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
