#include <stdio.h>

int main() {
    int a, i, num = 1;

    printf("Enter a number: ");
    scanf("%d", &a);

    for(i = 0; i < a; i++) {
        printf("%d", num);
        if(i != a - 1) {
            printf(", ");
        }
        num = num + 2;
    }

    printf("\n");
    return 0;
}
