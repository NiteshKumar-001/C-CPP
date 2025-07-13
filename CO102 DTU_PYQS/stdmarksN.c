#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    int reg_no;
    char name[50];
    double marks[3]; // Assuming 3 subjects
};

// Function to calculate maximum marks in each subject
void printMaxMarks(struct Student students[], int n) {
    printf("Maximum Marks in Each Subject:\n");
    for (int i = 0; i < n; i++) {
        double maxMarks = students[i].marks[0];
        for (int j = 1; j < 3; j++) {
            if (students[i].marks[j] > maxMarks) {
                maxMarks = students[i].marks[j];
            }
        }
        printf("Student %s: %.2f\n", students[i].name, maxMarks);
    }
}

// Function to calculate total and average marks
void calculateTotalAndAverage(struct Student students[], int n) {
    printf("\nRank-wise List (Total Marks):\n");
    for (int i = 0; i < n; i++) {
        double totalMarks = 0.0;
        for (int j = 0; j < 3; j++) {
            totalMarks += students[i].marks[j];
        }
        double averageMarks = totalMarks / 3.0;
        printf("Rank %d: %s (Total Marks: %.2f, Average Marks: %.2f)\n",
               i + 1, students[i].name, totalMarks, averageMarks);
    }
}

int main() {
    int n = 5; // Number of students (you can change this as needed)
    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Reg No: ");
        scanf("%d", &students[i].reg_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks in 3 subjects (separated by spaces): ");
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &students[i].marks[j]);
        }
    }

    // Print maximum marks in each subject
    printMaxMarks(students, n);

    // Calculate total and average marks, and print rank-wise list
    calculateTotalAndAverage(students, n);

    return 0;
}
