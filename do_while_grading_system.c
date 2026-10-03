 /*
  Name    : Amos William
  Adm No  : BCS-03-0076/2026
  Course  : Computer Science
  Unit    : Structured Programming And Algorithms
  Program : Student Grading System using do-while loop
*/

#include <stdio.h>

int main(void) {
    float marks;
    int choice = 1; // 1 = keep running, 0 = quit

    printf("       GRADING SYSTEM\n");

    do {
        printf("\nEnter the marks: ");
        scanf("%f", &marks);

        // 1. IF MARK IS INVALID (Above 100 or Below 0)
        if (marks < 0 || marks > 100) {
            printf("Invalid input! Marks must be between 0 and 100.\n");
            
            // ASK ONLY WHEN AN INVALID MARK IS ENTERED
            printf("Do you want to go back to the grading system? (1 = Yes, 0 = Quit): ");
            scanf("%d", &choice);
        } 
        // 2. IF MARK IS VALID (Normal continuous grading)
        else {
            if (marks >= 80) {
                printf("The grade is: A\n");
            } else if (marks >= 70) {
                printf("The grade is: B\n");
            } else if (marks >= 60) {
                printf("The grade is: C\n");
            } else if (marks >= 50) {
                printf("The grade is: D\n");
            } else {
                printf("The grade is: F\n");
            }

        }

    } while (choice == 1); // Loop repeats as long as choice is 1

    printf("\nGrading system terminated. Goodbye!\n");
    return 0;
}