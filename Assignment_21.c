// 1. Define a structure Employee with member variables id, name, salary
struct Employee {
    int id;
    char name[50];
    double salary;
};

// 2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    double salary;
};

void inputEmployee(struct Employee *emp) {
    printf("Enter employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter employee name: ");
    scanf("%s", emp->name);

    printf("Enter employee salary: ");
    scanf("%lf", &emp->salary);
}

int main() {
    struct Employee emp1;
    inputEmployee(&emp1);

    printf("Employee ID: %d\n", emp1.id);
    printf("Employee Name: %s\n", emp1.name);
    printf("Employee Salary: %.2lf\n", emp1.salary);

    return 0;
}

// 3. Write a function to display employee data. [ Refer structure from question 1 ]
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    double salary;
};

void displayEmployee(const struct Employee *emp) {
    printf("Employee ID: %d\n", emp->id);
    printf("Employee Name: %s\n", emp->name);
    printf("Employee Salary: %.2lf\n", emp->salary);
}

int main() {
    struct Employee emp1 = {101, "John Doe", 50000.0};
    displayEmployee(&emp1);

    return 0;
}

// 4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    double salary;
};

struct Employee findHighestSalary(const struct Employee empArray[], int size) {
    struct Employee highestSalaryEmp = empArray[0];
    
    for (int i = 1; i < size; i++) {
        if (empArray[i].salary > highestSalaryEmp.salary) {
            highestSalaryEmp = empArray[i];
        }
    }

    return highestSalaryEmp;
}

int main() {
    struct Employee employees[10] = {
        {101, "John Doe", 50000.0},
        {102, "Jane Smith", 55000.0},
        // ...
    };

    struct Employee highestSalaryEmp = findHighestSalary(employees, 10);
    printf("Employee with the highest salary:\n");
    displayEmployee(&highestSalaryEmp);

    return 0;
}

// 5. Write a function to sort employees according to their salaries [ refer structure from question 1]
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    double salary;
};

void sortEmployeesBySalary(struct Employee empArray[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (empArray[j].salary > empArray[j + 1].salary) {
                struct Employee temp = empArray[j];
                empArray[j] = empArray[j + 1];
                empArray[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Employee employees[10] = {
        {101, "John Doe", 50000.0},
        {102, "Jane Smith", 55000.0},
        // ...
    };

    sortEmployeesBySalary(employees, 10);

    printf("Employees sorted by salary:\n");
    for (int i = 0; i < 10; i++) {
        displayEmployee(&employees[i]);
    }

    return 0;
}

// 6. Write a function to sort employees according to their names [refer structure from question 1]
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    double salary;
};

void sortEmployeesByName(struct Employee empArray[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(empArray[j].name, empArray[j + 1].name) > 0) {
                struct Employee temp = empArray[j];
                empArray[j] = empArray[j + 1];
                empArray[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Employee employees[10] = {
        {101, "John Doe", 50000.0},
        {102, "Jane Smith", 55000.0},
        // ...
    };

    sortEmployeesByName(employees, 10);

    printf("Employees sorted by name:\n");
    for (int i = 0; i < 10; i++) {
        displayEmployee(&employees[i]);
    }

    return 0;
}

// 7. Write a program to calculate the difference between two time periods.
#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time time1, time2, diffTime;

    printf("Enter time 1 (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter time 2 (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    // Calculate the difference
    int totalSeconds1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    int totalSeconds2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
    int diffSeconds = totalSeconds2 - totalSeconds1;

    diffTime.hours = diffSeconds / 3600;
    diffTime.minutes = (diffSeconds % 3600) / 60;
    diffTime.seconds = diffSeconds % 60;

    printf("Time difference: %d hours %d minutes %d seconds\n",
           diffTime.hours, diffTime.minutes, diffTime.seconds);

    return 0;
}

// 8. Write a program to store information of 10 students and display them using structure.
#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    double marks;
};

int main() {
    struct Student students[10];

    printf("Enter information for 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter Roll No for student %d: ", i + 1);
        scanf("%d", &students[i].rollNo);

        printf("Enter Name for student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter Marks for student %d: ", i + 1);
        scanf("%lf", &students[i].marks);
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2lf\n", students[i].marks);
        printf("\n");
    }

    return 0;
}

// 9. Write a program to store information of n students and display them using structure
#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    double marks;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    printf("Enter information for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter Roll No for student %d: ", i + 1);
        scanf("%d", &students[i].rollNo);

        printf("Enter Name for student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter Marks for student %d: ", i + 1);
        scanf("%lf", &students[i].marks);
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2lf\n", students[i].marks);
        printf("\n");
    }

    return 0;
}

// 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
#include <stdio.h>

struct Marks {
    int rollNo;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() {
    struct Marks students[5];

    printf("Enter marks for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter Roll No for student %d: ", i + 1);
        scanf("%d", &students[i].rollNo);

        printf("Enter Name for student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter Chemistry marks for student %d: ", i + 1);
        scanf("%d", &students[i].chem_marks);

        printf("Enter Mathematics marks for student %d: ", i + 1);
        scanf("%d", &students[i].maths_marks);

        printf("Enter Physics marks for student %d: ", i + 1);
        scanf("%d", &students[i].phy_marks);
    }

    printf("\nStudent Percentage:\n");
    for (int i = 0; i < 5; i++) {
        int total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        double percentage = (total_marks / 300.0) * 100.0;

        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2lf%%\n", percentage);
        printf("\n");
    }

    return 0;
}
