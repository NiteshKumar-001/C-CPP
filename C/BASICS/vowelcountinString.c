#include <stdio.h>
#include <string.h>

int main() {
    char input_string[100];
    printf("Enter a string: ");
    scanf("%[^\n]", input_string);

    int vowel_count = 0;
    for (int i = 0; i < strlen(input_string); i++) {
        char c = input_string[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowel_count++;
        }
    }

    printf("Number of vowels in the string: %d\n", vowel_count);
    return 0;
}
