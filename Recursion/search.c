#include <stdio.h>
#include <stdlib.h>

int search(int a[], int qtd, int n)
{
    if (n == a[qtd - 1])
		return a[qtd-1];
	else
		return search(a, qtd-1, n);
}
int main()
{
    int a[] = {9,6,4,3,2};
    int qtd = 5;
    int n = 4;

    printf("%d", search(a,qtd,n));
    return 0;
}
