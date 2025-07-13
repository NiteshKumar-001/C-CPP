#include <stdio.h>

struct Employee {
    char name[100];
    int employeeID;
    float salary;
};

int main() {
    struct Employee emp;

    printf("Enter employee name: ");
    scanf("%s", emp.name);
    
    printf("Enter employee ID: ");
    scanf("%d", &emp.employeeID);
    
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.employeeID);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
