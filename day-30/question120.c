//Write a program to Develop complete mini project using arrays, strings and functions
#include <stdio.h>

#define MAX 50

int roll[MAX];
char name[MAX][30];
float marks[MAX];
int n = 0;

// Function to add students
void addStudent() {
    int i, num;

    printf("How many students do you want to add? ");
    scanf("%d", &num);

    for(i = 0; i < num; i++) {
        printf("\nStudent %d\n", n + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[n]);

        printf("Enter Name: ");
        scanf("%s", name[n]);

        printf("Enter Marks: ");
        scanf("%f", &marks[n]);

        n++;
    }
}

// Function to display students
void displayStudents() {
    int i;

    if(n == 0) {
        printf("\nNo student records found.\n");
        return;
    }

    printf("\n----- Student Records -----\n");
    printf("Roll No\tName\t\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%-15s%.2f\n", roll[i], name[i], marks[i]);
    }
}

// Function to search student
void searchStudent() {
    int i, r, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++) {
        if(roll[i] == r) {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found.\n");
}

// Function to update marks
void updateStudent() {
    int i, r;

    printf("Enter Roll Number to update: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++) {
        if(roll[i] == r) {
            printf("Enter New Marks: ");
            scanf("%f", &marks[i]);
            printf("Record Updated Successfully!\n");
            return;
        }
    }

    printf("Student not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student Marks\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}