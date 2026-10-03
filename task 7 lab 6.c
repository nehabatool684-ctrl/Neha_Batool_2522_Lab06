#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    //
    for (int row = 1; row <= n; row++) {

        
        for (int space = 1; space <= n - row; space++) {
            printf(" ");
        
        if (row == 1) {
            printf("*");
        }
        else {
            printf("*");

            for (int space = 1; space <= 2 * row - 3; space++) {
                printf(" ");
            }

            printf("*");
        }

        printf("\n");
    }


    for (int row = n - 1; row >= 1; row--) {

        
        for (int space = 1; space <= n - row; space++) {
            printf(" ");
        }

        
        if (row == 1) {
            printf("*");
        }
        else {
            printf("*");

        
            for (int space = 1; space <= 2 * row - 3; space++) {
                printf(" ");
            }

            printf("*");
        }

        printf("\n");
    }

    return 0;
}

