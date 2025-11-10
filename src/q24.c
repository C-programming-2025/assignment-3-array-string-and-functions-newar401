#include <stdio.h>

int calculatePower(int base, int exp) {
    if(exp == 0) return 1;
    return base * calculatePower(base, exp - 1);
}

int main() {
    int base, exp;
    scanf("%d %d", &base, &exp);
    printf("%d\n", calculatePower(base, exp));
    return 0;
}
