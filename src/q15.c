#include <stdio.h>

int countOccurrences(char str[], char ch) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100], ch;
    scanf("%s %c", str, &ch);
    printf("%d\n", countOccurrences(str, ch));
    return 0;
}
