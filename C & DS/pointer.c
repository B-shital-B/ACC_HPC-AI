#include <stdio.h>

int byvalue(int b);
void byreference(int *b);

int main() {
    int a = 20;

    byvalue(a);
    printf("Value of a after function call: %d\n", a);

    byreference(&a);
    printf("Value of a after function call: %d\n", a);

    return 0;
}

int byvalue(int b) {
    b = 100;
    printf("Value of b inside byvalue function: %d\n", b);
    return b;
}

void byreference(int *b) {
    *b = 100;
    printf("Value of b inside byreference function: %d\n", *b);
}