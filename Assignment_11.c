// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
    return 0;
}

// 2. Write a function to calculate HCF of two numbers. (TSRS)
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
    printf("HCF of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    return 0;
}

// 3. Write a function to check whether a given number is Prime or not. (TSRS)
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}

// 4. Write a function to find the next prime number of a given number. (TSRS)
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int nextPrime(int num) {
    num++;
    while (!isPrime(num)) {
        num++;
    }
    return num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Next prime number after %d is %d\n", num, nextPrime(num));
    return 0;
}

// 5. Write a function to print first N prime numbers (TSRN)
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void printNPrimes(int n) {
    int num = 2;
    int count = 0;

    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("First %d prime numbers are: ", n);
    printNPrimes(n);
    printf("\n");
    return 0;
}

// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrimesInRange(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &start, &end);
    printPrimesInRange(start, end);
    return 0;
}

// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include <stdio.h>

void printFibonacci(int n) {
    int num1 = 0, num2 = 1;

    printf("First %d terms of Fibonacci series: ", n);

    for (int i = 0; i < n; i++) {
        printf("%d ", num1);
        int nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printFibonacci(n);
    return 0;
}

// 8. Write a function to print PASCAL Triangle. (TSRN)
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int binomialCoefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void printPascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i - 1; space++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for Pascal Triangle: ");
    scanf("%d", &rows);
    printPascalTriangle(rows);
    return 0;
}

// 9. Write a program in C to find the square of any number using the function.
#include <stdio.h>

int square(int num) {
    return num * num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square of %d is %d\n", num, square(num));
    return 0;
}

// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

float seriesSum(int n) {
    float sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (float)factorial(i) / i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Sum of the series is: %.2f\n", seriesSum(n));
    return 0;
}
