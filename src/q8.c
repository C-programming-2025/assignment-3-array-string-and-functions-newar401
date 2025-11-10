#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int len = 0;
    while(str[len] != '\0') len++;
    int flag = 1;
    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
