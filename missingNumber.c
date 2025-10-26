#include <stdio.h>

// Recursive XOR from 1 to n
int xorTillN(int n) {
    if (n == 0) return 0;
    int pattern[] = {n, 1, n + 1, 0};
    return pattern[n % 4];
}

// Recursive XOR of array elements
int xorArray(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] ^ xorArray(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int totalXor = xorTillN(n + 1);
    int arrXor = xorArray(arr, n);
    int missing = totalXor ^ arrXor;

    printf("Missing number: %d\n", missing);
    return 0;
}
