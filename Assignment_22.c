// 1. Define a function to input variable length string and store it in an array without memory wastage.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inputString() {
    char *str = NULL;
    int capacity = 5; // Initial capacity
    int length = 0;
    char ch;

    str = (char*)malloc(capacity * sizeof(char));

    if (!str) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    printf("Enter a string: ");
    while ((ch = getchar()) != '\n') {
        if (length >= capacity - 1) {
            capacity *= 2;
            str = (char*)realloc(str, capacity * sizeof(char));
            if (!str) {
                printf("Memory allocation failed.\n");
                return NULL;
            }
        }
        str[length++] = ch;
    }

    str[length] = '\0';
    return str;
}

int main() {
    char *input = inputString();
    if (input) {
        printf("Input: %s\n", input);
        free(input);
    }
    return 0;
}

// 2. Write a program to ask the user to input a number of data values he would like to enter then create an array dynamically to accommodate the data values. Now take the input from the user and display the average of data values.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of data values: ");
    scanf("%d", &n);

    double *data = (double*)malloc(n * sizeof(double));

    if (!data) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d data values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &data[i]);
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += data[i];
    }

    double average = sum / n;
    printf("Average of data values: %.2lf\n", average);

    free(data);
    return 0;
}

// 3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int *values = (int*)malloc(n * sizeof(int));

    if (!values) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += values[i];
    }

    printf("Sum of values: %d\n", sum);

    free(values);
    return 0;
}

// 4. Write a program to input and print text using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *text = NULL;
    int length;

    printf("Enter the length of text: ");
    scanf("%d", &length);

    text = (char*)malloc((length + 1) * sizeof(char));

    if (!text) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter text: ");
    scanf(" %[^\n]", text);

    printf("You entered: %s\n", text);

    free(text);
    return 0;
}

// 5. Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *array = (int*)malloc(n * sizeof(int));

    if (!array) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d array elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int sum = 0;
    printf("Array elements and sum:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
        sum += array[i];
    }
    printf("\nSum: %d\n", sum);

    free(array);
    return 0;
}

// 6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *array = (int*)malloc(n * sizeof(int));

    if (!array) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d array elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int largest = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    printf("Largest element: %d\n", largest);

    free(array);
    return 0;
}

// 7. Write a program to demonstrate memory leak in C.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *data = (int*)malloc(5 * sizeof(int));
    // Missing free(data);
    return 0;
}

// 8. Write a program to demonstrate dangling pointers in C.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *data = (int*)malloc(5 * sizeof(int));
    int *danglingPointer = data;
    
    free(data); // Dangling pointer

    // Accessing dangling pointer
    *danglingPointer = 10;

    return 0;
}

// 9. Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter the size in bytes: ");
    scanf("%d", &size);

    int *ptr = (int*)malloc(size);

    if (!ptr) {
        printf("Memory allocation failed.\n");
    } else {
        printf("Memory allocation successful.\n");
        free(ptr);
    }

    return 0;
}

// 10. Find out the maximum and minimum from an array using dynamic memory allocation in C.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *array = (int*)malloc(n * sizeof(int));

    if (!array) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d array elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int max = array[0];
    int min = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    free(array);
    return 0;
}
