//Write a program to Create salary management system.
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic_salary;
    float hra;
    float da;
    float ta;
    float net_salary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i, id, found;

    while (1) {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", emp[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &emp[n].basic_salary);

            emp[n].hra = emp[n].basic_salary * 0.5;  // Assuming HRA is 50% of basic salary
            emp[n].da = emp[n].basic_salary * 0.3;  // Assuming DA is 30% of basic salary
            emp[n].ta = emp[n].basic_salary * 0.2;  // Assuming TA is 20% of basic salary
            emp[n].net_salary = emp[n].basic_salary + emp[n].hra + emp[n].da + emp[n].ta;

            n++;
            printf("Employee record added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No employee records found.\n");
            } else {
                printf("\nEmployee Records:\n");
                printf("ID\tName\tBasic Salary\tHRA\tDA\tTA\tNet Salary\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", emp[i].id, emp[i].name, emp[i].basic_salary, emp[i].hra, emp[i].da, emp[i].ta, emp[i].net_salary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (emp[i].id == id) {
                    printf("\nEmployee Found:\n");
                    printf("ID: %d\n", emp[i].id);
                    printf("Name: %s\n", emp[i].name);
                    printf("Basic Salary: %.2f\n", emp[i].basic_salary);
                    printf("HRA: %.2f\n", emp[i].hra);
                    printf("DA: %.2f\n", emp[i].da);
                    printf("TA: %.2f\n", emp[i].ta);
                    printf("Net Salary: %.2f\n", emp[i].net_salary);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Employee record not found.\n");
            }
            break;

        case 4:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}