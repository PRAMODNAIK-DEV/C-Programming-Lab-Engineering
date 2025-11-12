#include <stdio.h>

int main() {
    int age;
    char gender;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Note: space before %c to ignore newline character or use the getchar();  function after reading age input from the user
    // Once user enter the age and press Enter, the newline character (\n) will still in the keyboard buffer, So If you immediately call another scanf() with %c, it doesn’t wait for new input — it just reads that leftover newline (\n) from the previous input.
    // As a result, the program might skip asking for gender and directly continue or behave unexpectedly.
    printf("Enter your gender (M for Male / F for Female): ");
    scanf(" %c", &gender);  // Note: space before %c to ignore newline character or use the getchar();  function after reading age input from teh user

    if ((gender == 'M' || gender == 'm') && age >= 60) {
        printf("You are a Senior Citizen (Male).\n");
    }
    else if ((gender == 'F' || gender == 'f') && age >= 58) {
        printf("You are a Senior Citizen (Female).\n");
    }
    else {
        printf("You are NOT a Senior Citizen.\n");
    }

    return 0;
}
