#include <stdio.h>

int sumloop(void)
{
    int i, total = 0;
    for(i = 0; i < 1000; i++)
        total += i;

    return total;  // return value
}

int main() {
    int result = sumloop();
    printf("total = %d\n", result);
    return 0;
}
