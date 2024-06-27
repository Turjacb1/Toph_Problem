#include <stdio.h>

int main() {
    int N;

    printf("Enter the size of the pyramid (1 <= N <= 100): ");
    scanf("%d", &N);
    if (N < 1 || N > 100) {
        printf("Invalid input: N must be between 1 and 100.\n");
        return 1;
    }

   
    int spaces = N - 1;

    for (int i = 1; i <= N; i++) {
    
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (int j = 1; j <=1 * i; j++) {
            printf("* ");
        }

        printf("\n");
        spaces--;
    }

    return 0;
}
