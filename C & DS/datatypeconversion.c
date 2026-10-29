#include<stdio.h>
int main(){
    
    int a = 10;
    float b = 5.5;
    double c = 20.99;
    char d = 'A';

    // Implicit conversion
    float result1 = a + b; // int to float
    double result2 = b + c; // float to double

    // Explicit conversion (casting)
    int result3 = (int)c; // double to int
    float result4 = (float)a; // int to float

    printf("Implicit Conversion:\n");
    printf("a + b = %.2f\n", result1);
    printf("b + c = %.2f\n", result2);

    printf("\nExplicit Conversion:\n");
    printf("(int)c = %d\n", result3);
    printf("(float)a = %.2f\n", result4);

    return 0;
}
