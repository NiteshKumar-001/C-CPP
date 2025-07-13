#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *str) {
    int length = strlen(str);
    int i, j;

        for (i = 0, j = length - 1; i < j; i++, j--) {
          if (str[i] != str[j]) {
            return false;
        }
    }

        return true;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
        if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

        if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
