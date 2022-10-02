#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("int: %zu bytes\n", sizeof(intType));
    printf("float: %zu bytes\n", sizeof(floatType));
    printf("double: %zu bytes\n", sizeof(doubleType));
    printf("char: %zu byte\n", sizeof(charType));
    
    return 0;
}