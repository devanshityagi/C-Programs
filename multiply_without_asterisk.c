#include <stdio.h>
int main() {
    int a, b, product;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    product = 0;
    for (int i=1; i<=b; i++){
        product = product + a;
    }
    printf("Product of %d and %d is: %d", a, b, product);
    return 0;
}