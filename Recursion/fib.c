#include <stdio.h>
#include <stdlib.h>

int fib(int n)    
{
                      /*Fibonacci - 1 1 2 3 5 8  13...
                        If the n = 6, the numbers will be added together 6 times.
                        It's going to return the 7th element of the fibonacci sequence. In this case, 13. */

    if(n < 2){ return 1; }    // Base case
    else		   
    return (fib(n-1)+ fib(n-2));
}
int main()
{
    int n;
    printf("Numero: ");
    scanf("%d", &n);

    printf("%d", fib(n));

    return 0;
}
