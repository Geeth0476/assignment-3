#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main() {
    char str[MAX_SIZE];
    int freq[256] = {0}, maxFreq = -1, i;
    char maxChar;
    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    for(i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }
    for(i = 0; i < 256; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = i;
        }
    }
    printf("The highest frequency character in the string is '%c' with frequency %d", maxChar, maxFreq);
    return 0;
}
