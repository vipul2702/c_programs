// 1. Write a function to swap values of two in variables of calling function. (TSRS)
#include <stdio.h>

void swapIntegers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    
    swapIntegers(&x, &y);
    
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}

// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include <stdio.h>
#include <string.h>

void swapStrings(char str1[], char str2[]) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    printf("Before swapping: str1 = %s, str2 = %s\n", str1, str2);

    swapStrings(str1, str2);

    printf("After swapping: str1 = %s, str2 = %s\n", str1, str2);
    return 0;
}

// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include <stdio.h>

void sort(int *ptr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {4, 2, 8, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// 4. Write a program in C to demonstrate how to handle the pointers in the program.
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}

// 5. Write a program to find the maximum number between two numbers using a pointer
#include <stdio.h>

int findMax(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

int main() {
    int x = 5, y = 10;
    int max = findMax(&x, &y);
    
    printf("Maximum between %d and %d is: %d\n", x, y, max);
    return 0;
}

// 6. Write a program to calculate the length of the string using a pointer
#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[] = "Hello, World!";
    int length = stringLength(str);

    printf("Length of the string: %d\n", length);
    return 0;
}

// 7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include <stdio.h>
#include <ctype.h>

void countVowelsConsonants(char *str, int *vowels, int *consonants) {
    *vowels = *consonants = 0;

    while (*str != '\0') {
        char ch = tolower(*str);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        str++;
    }
}

int main() {
    char str[] = "Hello, World!";
    int vowels, consonants;

    countVowelsConsonants(str, &vowels, &consonants);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    return 0;
}

// 8. Write a program to compute the sum of all elements in an array using pointers.
#include <stdio.h>

int arraySum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = arraySum(arr, size);

    printf("Sum of array elements: %d\n", sum);
    return 0;
}

// 9. Write a program to print the elements of an array in reverse order.
#include <stdio.h>

void printArrayReverse(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array in reverse order: ");
    printArrayReverse(arr, size);
    return 0;
}

// 10. Write a program to print a string in reverse using a pointer.
#include <stdio.h>
#include <string.h>

void printStringReverse(char *str) {
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", *(str + i));
    }
    printf("\n");
}

int main() {
    char str[] = "Hello, World!";
    printf("String in reverse: ");
    printStringReverse(str);
    return 0;
}
