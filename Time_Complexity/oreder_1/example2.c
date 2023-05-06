#include <stdio.h>

int main()
{
    int num, result;
    scanf("%d", &num);

    result = num * (num + 1) / 2;
    printf("result is = %d\n", result);

    return 0;
}