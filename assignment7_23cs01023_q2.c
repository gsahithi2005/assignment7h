#include <stdio.h>
#include <ctype.h>
void a(char str[]) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    a(str);
    printf("String after removing non-alphabetic characters: %s\n", str);
    return 0;
}

