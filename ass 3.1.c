#include <stdio.h>
int isPrime(int num) 
{
    int i;
    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}
void displayPrimeNumbers(int lower, int upper) {
    int i, flag;
    printf("Prime numbers between %d and %d are: ", lower, upper);
    for(i = lower; i <= upper; i++) {
        if(i == 0 || i == 1) {
            continue;
        }
        flag = isPrime(i);
        if(flag == 1) {
            printf("%d ", i);
        }
    }
}
int main() {
    int lower, upper;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &lower, &upper);
    displayPrimeNumbers(lower, upper);
    return 0;
}
