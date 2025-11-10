#include <stdio.h>

long long findFactorial(int n) {
    long long factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %lld\n", num, findFactorial(num));
    }

    return 0;
}
