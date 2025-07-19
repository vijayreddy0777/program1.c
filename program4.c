#include <stdio.h>

int main() {
    int arr[] = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count[10] = {0}; // index 1 to 9 will be used

    for (int i = 0; i < size; i++) {
        for (int j = 1; j <= 9; j++) {
            if (arr[i] % j == 0) {
                count[j]++;
            }
        }
    }

    // Print result
    for (int i = 1; i <= 9; i++) {
        printf("%d: %d\n", i, count[i]);
    }

    return 0;
}
