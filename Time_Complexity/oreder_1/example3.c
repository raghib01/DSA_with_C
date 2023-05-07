#include <stdio.h>
int main()
{
    int i, n, res;
    scanf("%d", &n);

    res = 0;

    for (i = 1; i <= n; i++)
    {
        res = res + i;
    }
    printf("result is = %d\n", res);
    return 0;
}

/*
    input value N is propotional operation.
    when n = 1, loop operation number = 1
         n = 2, loop operation number = 2
         n = 3, loop operation number = 3.

    so we showed its a liniar graphical complexity.
    thats why its Big O(n) complexity
*/