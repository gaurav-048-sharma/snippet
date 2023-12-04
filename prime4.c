#include <stdio.h>

int main() {
    int i, j, prime, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++) {
        prime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime) {
            printf("%d ", i);
        }
    }

    return 0;
}