#include <stdio.h>

int isPrime(int n) 
{
    if (n <= 1) {
        return 0;
    }
    int i;
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n,i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int found = 0;
    for (i = 2; i <= n/2; i++) {
        if (isPrime(i) && isPrime(n-i)) {
            printf("%d = %d + %d\n", n, i, n-i);
            found = 1;
        }
    }
    if (!found) {
        printf("The number cannot be expressed as the sum of two prime numbers.\n");
    }

    return 0;
}

