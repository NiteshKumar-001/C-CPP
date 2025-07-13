#include <stdio.h>

int main() {
    int integerVariable;
    double doubleVariable;
    float floatvariable;
    char charactervariable;
    
    printf("Size of integerVariable: %lu bytes\n", sizeof(integerVariable));
    printf("Size of doubleVariable: %lu bytes\n", sizeof(doubleVariable));
    printf("Size of float variable: %lu bytes\n", sizeof(floatvariable));
     printf("Size of char variable: %lu bytes\n", sizeof(charactervariable));


    return 0;
}
