//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};
void printStudent(struct Student *s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll_no, s->marks);
}
int main() {
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));
    if (student == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    printf("Enter Name: ");
    scanf("%s", student->name);
    printf("Enter Roll No: ");
    scanf("%d", &student->roll_no);
    printf("Enter Marks: ");
    scanf("%d", &student->marks);
    
    printStudent(student);
    free(student);
    return 0;
}
