#include <stdio.h>

int calculateGCD(int a, int b) {
    if(b == 0) return a;
    return calculateGCD(b, a % b);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", calculateGCD(x, y));
    return 0;
}
