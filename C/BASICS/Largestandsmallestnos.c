#include <stdio.h>

int main() {
    int limit, num, big = 0, small;
    
    printf("Enter the limit (number of values): ");
    scanf("%d", &limit);
    
    printf("Enter %d numbers:\n", limit);
    scanf("%d", &num);
    
    // Initialize big and small with the first number entered
    big = small=num;
       
    // Loop to read remaining numbers and update big and small
    while (limit > 1) {
        scanf("%d", &num);
        
        if (num > big) {
            big = num; // Update biggest number
        } else if (num < small) {
            small = num; // Update smallest number
        }
        
        limit--;
    }
    
    printf("Largest number is %d\n", big);
    printf("Smallest number is %d\n", small);
    
    return 0;
}
