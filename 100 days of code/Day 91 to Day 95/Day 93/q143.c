//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};
void printTopper(struct Student students[], int n) {
    struct Student topper = students[0];
    for(int i = 1; i < n; i++) {
        if(students[i].marks > topper.marks) {
            topper = students[i];
        }
    }
    printf("Topper: %s (Marks: %d)\n", topper.name, topper.marks);
}
int main() {
    struct Student students[3];
    for(int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
    
    printTopper(students, 3);
    return 0;
}
