#include<stdio.h>
int main() {
    int m = 0, n;
    char x[100];
    printf("\nEnter the string: ");
    fgets(x, sizeof(x), stdin);
    int length = 0;
    while (x[length] != '\0') {
        length++;
    }
    n = length-1;
    n--;
    while (m <= n) {
        if (x[n] != x[m]) {
            printf("\nThe string is not a palindrome");
            return 0; 
        } else {
            n--;
            m++;
        }
    }
    printf("\nThe string is a palindrome");
    return 0;
}
