// 1. Write a recursive function to calculate sum of first N natural numbers.
#include <stdio.h>

int sumOfNaturals(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumOfNaturals(n - 1);
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers: %d\n", n, sumOfNaturals(n));
    return 0;
}

// 2. Write a recursive function to calculate sum of first N odd natural numbers.
#include <stdio.h>

int sumOfOddNaturals(int n) {
    if (n == 0) {
        return 0;
    }
    return (2 * n - 1) + sumOfOddNaturals(n - 1);
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Sum of first %d odd natural numbers: %d\n", n, sumOfOddNaturals(n));
    return 0;
}

// 3. Write a recursive function to calculate sum of first N odd natural numbers.
#include <stdio.h>

int sumOfEvenNaturals(int n, int current) {
    if (n == 0) {
        return 0;
    }
    return current + sumOfEvenNaturals(n - 1, current + 2);
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Sum of first %d even natural numbers: %d\n", n, sumOfEvenNaturals(n, 2));
    return 0;
}

// 4. Write a recursive function to calculate sum of squares of first n natural numbers.
#include <stdio.h>

int sumOfSquares(int n) {
    if (n == 0) {
        return 0;
    }
    return n * n + sumOfSquares(n - 1);
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Sum of squares of first %d natural numbers: %d\n", n, sumOfSquares(n));
    return 0;
}

// 5. Write a recursive function to calculate sum of digits of a given number.
#include <stdio.h>

int sumOfDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return num % 10 + sumOfDigits(num / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is: %d\n", num, sumOfDigits(num));
    return 0;
}

// 6. Write a recursive function to calculate factorial of a given number.
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is: %d\n", num, factorial(num));
    return 0;
}

// 7. Write a recursive function to calculate HCF of two numbers.
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("HCF of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
    return 0;
}

// 8. Write a recursive function to print first N terms of Fibonacci series.
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int n) {
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printFibonacciSeries(n);
    return 0;
}

// 9. Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>

int countDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return 1 + countDigits(num / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of digits in %d is: %d\n", num, countDigits(num));
    return 0;
}

// 10. Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}

int main() {
    double base;
    int exponent;
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    printf("%.2lf ^ %d = %.2lf\n", base, exponent, power(base, exponent));
    return 0;
}
