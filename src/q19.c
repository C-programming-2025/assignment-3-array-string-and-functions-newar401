#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void calculateFactorialSeries(int n) {
    for(int i = 1; i <= n; i++) {
        printf("%lld ", factorial(i));
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    calculateFactorialSeries(n);
    return 0;
}
