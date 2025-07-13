#include <stdio.h>

void printDigit(int digit) {
    switch (digit) {
        case 0: printf("zero"); break;
        case 1: printf("one"); break;
        case 2: printf("two"); break;
        case 3: printf("three"); break;
        case 4: printf("four"); break;
        case 5: printf("five"); break;
        case 6: printf("six"); break;
        case 7: printf("seven"); break;
        case 8: printf("eight"); break;
        case 9: printf("nine"); break;
        default: break;
    }
}

void printTwoDigitNumber(int number) {
    int tens = number / 10;
    int ones = number % 10;

    if (tens == 1) {
        // Numbers from 10 to 19
        switch (ones) {
            case 0: printf("ten"); break;
            case 1: printf("eleven"); break;
            case 2: printf("twelve"); break;
            case 3: printf("thirteen"); break;
            case 4: printf("fourteen"); break;
            case 5: printf("fifteen"); break;
            case 6: printf("sixteen"); break;
            case 7: printf("seventeen"); break;
            case 8: printf("eighteen"); break;
            case 9: printf("nineteen"); break;
            default: break;
        }
    } else {
        // Numbers with tens place from 20 to 90
        switch (tens) {
            case 2: printf("twenty"); break;
            case 3: printf("thirty"); break;
            case 4: printf("forty"); break;
            case 5: printf("fifty"); break;
            case 6: printf("sixty"); break;
            case 7: printf("seventy"); break;
            case 8: printf("eighty"); break;
            case 9: printf("ninety"); break;
            default: break;
        }

        // Print the ones place if it's not zero
        if (ones != 0) {
            printf(" ");
            printDigit(ones);
        }
    }
}

void printThreeDigitNumber(int number) {
    int hundreds = number / 100;
    int remainingDigits = number % 100;

    // Print the hundreds place if it's not zero
    if (hundreds != 0) {
        printDigit(hundreds);
        printf(" hundred");

        // Print "and" if there are remaining digits
        if (remainingDigits != 0) {
            printf(" and ");
        }
    }

    // Print the remaining two digits
    printTwoDigitNumber(remainingDigits);
}

int main() {
    int number;

    // Input: Get the number from the user
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Check if the number is within the valid range
    if (number < 0 || number > 9999) {
        printf("Please enter a number between 0 and 9999.\n");
    } else if (number == 0) {
        printf("zero\n");
    } else {
        // Convert and print the number in words
        printf("In words: ");
        int thousands = number / 1000;
        int remainingDigits = number % 1000;

        if (thousands != 0) {
            printDigit(thousands);
            printf(" thousand");
            if (remainingDigits != 0) {
                printf(" ");
            }
        }

        printThreeDigitNumber(remainingDigits);
        printf("\n");
    }

    return 0;
}
