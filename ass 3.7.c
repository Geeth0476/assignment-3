#include <stdio.h>

int main() {
    char str[100];
    int sum = 0,i;

    printf("Enter the string : ");
    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++) {
        sum += str[i];
    }

    printf("Sum of all characters : %d", sum);

    return 0;
}
