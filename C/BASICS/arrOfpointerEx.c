#include <stdio.h>

int main() {
    int *ptrArray[3];
    
    int numArray[] = {10, 20, 30};
    
    for (int i = 0; i < 3; i++) {
    ptrArray[i] = &numArray[i];
    }
    printf("Values using pointers:\n");
    for (int i = 0; i < 3; i++) {
    printf("Value at index %d: %d\n", i, *ptrArray[i]);
    }
    
    return 0;
}
