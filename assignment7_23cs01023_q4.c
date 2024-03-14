#include <stdio.h>
int Maxfunction(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int max = Maxfunction(arr, n - 1);
    return (max > arr[n - 1]) ? max : arr[n - 1];
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = Maxfunction(arr, n);
    printf("The largest element in the array is: %d\n", max);
    return 0;
}
