#include <stdio.h>
#include <stdlib.h>

int mdc(int x, int y)
{
    if(y == 0)
        return x;
    else
    {
        mdc(y, x%y);
    }
}
/*
    euclides:
    mdc(int x, int y)
        if (y ==0)
            return y;
        else
        {
            int z;
            while(z != 0)
            {
                z = x%y;
                x = y;
                y = z;
            }
            return x;
        }

    mdc ( y, x%y ) // it's gonna do the same thing.
                  // the x = y and the y = x%y

*/
int main()
{
    int x = 8;
    int y = 16;

    printf("%d", mdc(x, y));
    return 0;
}
