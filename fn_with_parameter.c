#include <stdio.h>
int add(a,b) {
    return a+b;
}

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Sum = %d", add(a,b));
    return 0;
}