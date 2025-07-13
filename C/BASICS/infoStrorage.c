#include <stdio.h>

int main() {
    FILE *file = fopen("emp.txt", "w");
    
    if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
    }
    char name[50];
    int age;
    float salary;
    
    printf("Enter name: ");
    scanf("%s", name);
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("Enter salary: ");
    scanf("%f", &salary);
    
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);
    fprintf(file, "Salary: %.2f\n", salary);
    
    fclose(file);
    
    printf("File emp.txt created and data stored successfully!\n");

    return 0;
}
