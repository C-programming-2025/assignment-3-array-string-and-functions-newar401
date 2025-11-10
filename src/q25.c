#include <stdio.h>

int calculateSumOfDigits(int n) {
    if(n == 0) return 0;
    return (n % 10) + calculateSumOfDigits(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", calculateSumOfDigits(n));
    return 0;
}
