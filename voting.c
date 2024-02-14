#include <stdio.h>

int main() {
    // Declare variables
    int age;

    // Input age from the user
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility to vote
    if (age >= 18) {
        printf("Congratulations! You are eligible to vote.\n");
    } else {
        printf("Sorry, you are not eligible to vote.\n");
    }

    return 0;
}
