#include <stdio.h>

// Define the structure for student data
struct Student {
    char name[50];
    char dateOfBirth[15];
    int rollNumber;
    char className[20];
};

int main() {
    // Declare a variable of type struct Student
    struct Student student1;

    // Input data for the student
    printf("Enter student details:\n");
    printf("Name: ");
    fgets(student1.name, sizeof(student1.name), stdin);

    printf("Date of Birth: ");
    fgets(student1.dateOfBirth, sizeof(student1.dateOfBirth), stdin);

    printf("Roll Number: ");
    scanf("%d", &student1.rollNumber);

    // Consume the newline character left in the input buffer
    getchar();

    printf("Class: ");
    fgets(student1.className, sizeof(student1.className), stdin);

    // Display the entered student data
    printf("\nStudent Details:\n");
    printf("Name: %s", student1.name);
    printf("Date of Birth: %s", student1.dateOfBirth);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Class: %s", student1.className);

    return 0;
}
