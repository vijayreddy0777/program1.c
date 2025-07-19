#include <stdio.h>

int main() {
    int a, i;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        a = a - 1; // reduce even to previous odd
    }

    for (i = 1; i <= a; i += 2) {
        printf("%d", i);
        if (i + 2 <= a) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}
