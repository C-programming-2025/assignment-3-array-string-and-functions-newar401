#include <stdio.h>

int countOccurrences(char str[], char ch, int index) {
    if(str[index] == '\0') return 0;
    int count = (str[index] == ch) ? 1 : 0;
    return count + countOccurrences(str, ch, index + 1);
}

int main() {
    char str[100], ch;
    scanf("%s %c", str, &ch);
    printf("%d\n", countOccurrences(str, ch, 0));
    return 0;
}
