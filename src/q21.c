#include <stdio.h>

long long calculateFactorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * calculateFactorial(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", calculateFactorial(n));
    return 0;
}
