#include <stdio.h>
#include <stdlib.h>

int sum(int n[], int qtd)
{
  if (qtd == 1)
		return n[0];
	else
		return n[qtd-1] + sum(n, qtd-1);
}

int main()
{
    int n[] = {0,1,2,3,4};
    printf("%d", sum(n, 5));
    return 0;
}
