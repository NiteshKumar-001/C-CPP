#include<stdio.h>
int main(){
    int n1;
    printf("Enter the 1st number:");
    scanf("%d",&n1);
    char op;
    printf("Enter a operator(+,-,*,/):");
    scanf(" %c",&op);
    int n2;
    printf("Enter the 2nd number:");
    scanf("%d",&n2);
    if (op == '+') {
        printf("%d + %d = %d\n", n1, n2, n1 + n2);
    } else if (op == '-') {
        printf("%d - %d = %d\n", n1, n2, n1 - n2);
    } else if (op == '*') {
        printf("%d * %d = %d\n", n1, n2, n1 * n2);
    } else if (op == '/') {
        if (n2 != 0) {
            printf("%d / %d = %d\n", n1, n2, n1 / n2);
        } else {
            printf("Error: Division by zero is undefined.\n");
        }
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}
