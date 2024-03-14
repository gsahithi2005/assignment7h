#include <stdio.h>
void reverseString(char a[], int start, int end) {
    if (start >= end)
        return;
    char temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    reverseString(a, start + 1, end - 1);
}

int main() {
    char a[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]", a);
    int length = 0;
    while (a[length] != '\0') {
        length++;
    }
    reverseString(a, 0, length - 1);
    printf("Reversed string: %s\n", a);
    return 0;
}
