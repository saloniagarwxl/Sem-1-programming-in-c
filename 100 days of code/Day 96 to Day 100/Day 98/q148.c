//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};
int areStudentsIdentical(struct Student s1, struct Student s2) {
    return (s1.roll_no == s2.roll_no) && (s1.marks == s2.marks) && (strcmp(s1.name, s2.name) == 0);
}
int main() {
    struct Student student1, student2;
    // Reading first student's data
    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Roll No: ");
    scanf("%d", &student1.roll_no);
    printf("Marks: ");
    scanf("%d", &student1.marks);
    
    // Reading second student's data
    printf("Enter details for Student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Roll No: ");
    scanf("%d", &student2.roll_no);
    printf("Marks: ");
    scanf("%d", &student2.marks);
    
    // Checking if students are identical
    if(areStudentsIdentical(student1, student2)) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }
    
    return 0;
}
