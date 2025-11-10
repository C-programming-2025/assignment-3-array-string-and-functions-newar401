#include <stdio.h>

void calculateBinary(int n) {
    if(n == 0) return;
    calculateBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;
    scanf("%d", &n);
    if(n == 0) {
        printf("0\n");
    } else {
        calculateBinary(n);
        printf("\n");
    }
    return 0;
}
