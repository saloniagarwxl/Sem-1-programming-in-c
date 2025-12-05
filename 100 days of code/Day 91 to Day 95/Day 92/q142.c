//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};
void printStudents(struct Student students[], int n) {
    printf("Name\tRoll No\tMarks\n");
    for(int i = 0; i < n; i++) {
        printf("%s\t%d\t%d\n", students[i].name, students[i].roll_no, students[i].marks);
    }
}
int main() {
    struct Student students[5];
    // Reading data for 5 students
    for(int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
    
    // Printing all students' data
    printStudents(students, 5);
    return 0;
}
