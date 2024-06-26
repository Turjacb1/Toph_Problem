#include <stdio.h>

void factorial(int n) {
    int a[2000], i, c;

   
    a[0] = 1;
    c = 0;  


    for (i = 2; i <= n; i++) {
        int temp = 0;
        for (int j = 0; j <= c; j++) {
            temp += a[j] * i;
            a[j] = temp % 10;
            temp /= 10;
        }

       
        while (temp > 0) {
            c++;  
            if (c >= 2000) {  
                printf("Factorial too large to be represented in this array.\n");
                return;  
            }
            a[c] = temp % 10;
            temp /= 10;
        }
    }


    printf("Factorial of %d: ", n);
    for (i = c; i >= 0; i--) {
        printf("%d", a[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        factorial(n);
    }

    return 0;
}
