#include <stdio.h>

int modify(int x) {
    x = x + 5;
    return x;
}

int square(int *x) {
    *x *= *x;
    return *x;
}

int main() {
    int a=5;
    printf("Value of 'a' before calling function: %d\n", a);
    printf("Value of 'a' inside function: %d\n", modify(a));
    printf("Value of 'a' after calling function: %d\n", a); //original value remains same

    int num=5;
    printf("Value of 'num' before calling function: %d\n", num);
    printf("Value of 'num' inside function: %d\n", square(&num));
    printf("Value of 'num' after calling function: %d\n", num);
    
    return 0;
}
