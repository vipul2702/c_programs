// 1. Write a recursive function to print first N natural numbers.
#include <stdio.h>

void printNaturalNumbers(int n) {
    if (n <= 0) {
        return;
    }
    printNaturalNumbers(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("First %d natural numbers: ", n);
    printNaturalNumbers(n);
    printf("\n");
    return 0;
}

// 2. Write a recursive function to print first N natural numbers in reverse order.
#include <stdio.h>

void printNaturalNumbersReverse(int n) {
    if (n <= 0) {
        return;
    }
    printf("%d ", n);
    printNaturalNumbersReverse(n - 1);
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("First %d natural numbers in reverse order: ", n);
    printNaturalNumbersReverse(n);
    printf("\n");
    return 0;
}

// 3. Write a recursive function to print first N odd natural numbers.
#include <stdio.h>

void printOddNaturalNumbers(int n) {
    if (n <= 0) {
        return;
    }
    printOddNaturalNumbers(n - 1);
    printf("%d ", 2 * n - 1);
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("First %d odd natural numbers: ", n);
    printOddNaturalNumbers(n);
    printf("\n");
    return 0;
}

// 4. Write a recursive function to print first N odd natural numbers in reverse order.
#include <stdio.h>

void printOddNaturalNumbersReverse(int n) {
    if (n <= 0) {
        return;
    }
    printf("%d ", 2 * n - 1);
    printOddNaturalNumbersReverse(n - 1);
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("First %d odd natural numbers in reverse order: ", n);
    printOddNaturalNumbersReverse(n);
    printf("\n");
    return 0;
}

// 5. Write a recursive function to print first N even natural numbers.
#include <stdio.h>

void printEvenNaturalNumbers(int n, int current) {
    if (n <= 0) {
        return;
    }
    printf("%d ", current);
    printEvenNaturalNumbers(n - 1, current + 2);
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("First %d even natural numbers: ", n);
    printEvenNaturalNumbers(n, 2);
    printf("\n");
    return 0;
}

// 6. Write a recursive function to print first N even natural numbers in reverse order.
#include <stdio.h>

void printEvenNaturalNumbersReverse(int n, int current) {
    if (n <= 0) {
        return;
    }
    printEvenNaturalNumbersReverse(n - 1, current - 2);
    printf("%d ", current);
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("First %d even natural numbers in reverse order: ", n);
    printEvenNaturalNumbersReverse(n, 2 * n);
    printf("\n");
    return 0;
}

// 7. Write a recursive function to print squares of first N natural numbers.
#include <stdio.h>

void printSquares(int n, int current) {
    if (n <= 0) {
        return;
    }
    printSquares(n - 1, current + 1);
    printf("%d ", current * current);
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Squares of first %d natural numbers: ", n);
    printSquares(n, 1);
    printf("\n");
    return 0;
}

// 8. Write a recursive function to print binary of a given decimal number.
#include <stdio.h>

void decimalToBinary(int num) {
    if (num > 0) {
        decimalToBinary(num / 2);
        printf("%d", num % 2);
    }
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary representation of %d is: ", num);
    decimalToBinary(num);
    printf("\n");
    return 0;
}

// 9. Write a recursive function to print octal of a given decimal number.
#include <stdio.h>

void decimalToOctal(int num) {
    if (num > 0) {
        decimalToOctal(num / 8);
        printf("%d", num % 8);
    }
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Octal representation of %d is: ", num);
    decimalToOctal(num);
    printf("\n");
    return 0;
}

// 10. Write a recursive function to print reverse of a given number.
#include <stdio.h>

int reverseNumber(int num) {
    static int reversedNum = 0;
    if (num == 0) {
        return reversedNum;
    }
    reversedNum = reversedNum * 10 + num % 10;
    return reverseNumber(num / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = reverseNumber(num);
    printf("Reverse of %d is: %d\n", num, reversed);
    return 0;
}
