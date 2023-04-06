#include <stdio.h>
int findGCD(int num1, int num2) {
    if(num2 == 0) {
        return num1;
    } else {
        return findGCD(num2, num1 % num2);
    }
}
int findLCM(int num1, int num2) {
    int lcm;
    lcm = (num1 > num2) ? num1 : num2;
    while(1) {
        if(lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
        lcm++;
    }
    return lcm;
}
int main() {
    int num1, num2, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    lcm = findLCM(num1, num2);
    printf("The LCM of %d and %d is %d", num1, num2, lcm);
    return 0;
}
