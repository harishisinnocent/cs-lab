#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    float salary;
};

struct Employee emp;

void addEmployee() {
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
}

void displayEmployeeDetails() {
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);
}

int main() {
    int choice;
    while (1) {
        printf("1. Add Employee\n2. Display Employee Details\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1) addEmployee();
        else if (choice == 2) displayEmployeeDetails();
        else break;
    }
    return 0;
}
