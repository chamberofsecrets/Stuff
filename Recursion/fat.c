#include <stdio.h>
#include <stdlib.h>

int fat(int n)
{
    if (n == 0)
            return 1;
    else
            return n * fat(n-1);
}
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    printf("%d", fat(n));

    return 0;
}