#include <stdio.h>

double convertTemperature(double c) {
    return c * 9 / 5 + 32;
}

int main() {
    double c;
    scanf("%lf", &c);
    printf("%.2lf\n", convertTemperature(c));
    return 0;
}
