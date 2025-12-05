//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
enum Menu { ADD, SUBTRACT, MULTIPLY };
int main() {
    enum Menu choice;
    int a = 10, b = 20; // Sample inputs
    choice = ADD; // Change this to SUBTRACT or MULTIPLY to test other operations

    switch(choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
