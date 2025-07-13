#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

     printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

      if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }

     printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

     if (str2[strlen(str2) - 1] == '\n') {
     str2[strlen(str2) - 1] = '\0';
    }

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is lexicographically smaller than string 2.\n");
    } else {
        printf("String 1 is lexicographically greater than string 2.\n");
    }

    return 0;
}
