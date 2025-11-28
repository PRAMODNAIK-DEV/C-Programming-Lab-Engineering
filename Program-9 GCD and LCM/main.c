#include <stdio.h>

// Function to find GCD (Greatest Common Divisor)
int findGCD(int a, int b) {
    int gcd;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}

// Function to find LCM (Least Common Multiple)
int findLCM(int a, int b, int gcd) {
    return (a * b) / gcd;  // Formula: LCM × GCD = a × b
}

int main() {
    int num1, num2, gcd, lcm;

    // Input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling the GCD function
    gcd = findGCD(num1, num2);

    // Calling the LCM function
    lcm = findLCM(num1, num2, gcd);

    // Result
    printf("\nGCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}