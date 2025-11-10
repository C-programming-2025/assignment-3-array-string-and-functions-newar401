#include <stdio.h>

int main() {
    char str[100], ch;
    scanf("%s %c", str, &ch);
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) count++;
    }
    printf("%d\n", count);
    return 0;
}
