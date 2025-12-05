//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
void printEmployee(struct Employee e) {
    printf("Name: %s | ID: %d | Salary: %.2f\n", e.name, e.id, e.salary);
}
int main() {
    struct Employee emp;
    FILE *file;

    // Reading employee data
    printf("Enter Name: ");
    scanf("%s", emp.name);
    printf("Enter ID: ");
    scanf("%d", &emp.id);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Writing employee data to binary file
    file = fopen("employee.dat", "wb");
    if (file != NULL) {
        fwrite(&emp, sizeof(struct Employee), 1, file);
        fclose(file);
    } else {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Reading employee data from binary file
    struct Employee emp_read;
    file = fopen("employee.dat", "rb");
    if (file != NULL) {
        fread(&emp_read, sizeof(struct Employee), 1, file);
        fclose(file);
        
        // Printing employee data read from file
        printEmployee(emp_read);
    } else {
        printf("Error opening file for reading.\n");
        return 1;
    }

    return 0;
}
