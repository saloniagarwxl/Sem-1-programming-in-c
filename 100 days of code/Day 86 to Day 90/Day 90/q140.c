//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>
enum Gender { MALE, FEMALE, OTHER };
struct Person {
    enum Gender gender;
};
void printGender(struct Person p) {
    switch(p.gender) {
        case MALE:
            printf("Male\n");
            break;  
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }
}