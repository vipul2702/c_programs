// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include <stdio.h>

int findGreatestNumber(int arr[], int size) {
    int greatest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > greatest) {
            greatest = arr[i];
        }
    }
    return greatest;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The greatest number in the array is: %d\n", findGreatestNumber(arr, size));
    return 0;
}

// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include <stdio.h>

int findSmallestNumber(int arr[], int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The smallest number in the array is: %d\n", findSmallestNumber(arr, size));
    return 0;
}

// 3. Write a function to sort an array of any size. (TSRS)
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, size);

    printf("The sorted array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] ).
#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int size, int n, char direction) {
    if (direction == 'L' || direction == 'l') {
        n %= size;  // To handle cases where n > size
        reverseArray(arr, 0, n - 1);
        reverseArray(arr, n, size - 1);
        reverseArray(arr, 0, size - 1);
    } else if (direction == 'R' || direction == 'r') {
        n %= size;  // To handle cases where n > size
        reverseArray(arr, 0, size - 1);
        reverseArray(arr, 0, n - 1);
        reverseArray(arr, n, size - 1);
    }
}

int main() {
    int size, n;
    char direction;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &n);

    printf("Enter the direction of rotation (L/R): ");
    scanf(" %c", &direction);

    rotateArray(arr, size, n, direction);

    printf("The rotated array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.Function has to return the value of the element.
#include <stdio.h>

int findAdjacentDuplicate(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return arr[i];
        }
    }
    return -1;  // No adjacent duplicates found
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicate = findAdjacentDuplicate(arr, size);
    if (duplicate != -1) {
        printf("First adjacent duplicate value in the array: %d\n", duplicate);
    } else {
        printf("No adjacent duplicate values found in the array.\n");
    }
    return 0;
}

// 6. Write a function in C to read n number of values in an array and display it in reverse order.
#include <stdio.h>

void reverseArray(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order: ");
    reverseArray(arr, size);
    return 0;
}

// 7. Write a function in C to count a total number of duplicate elements in an array.
#include <stdio.h>

int countDuplicates(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;  // Count only once for each duplicate
            }
        }
    }
    return count;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicates = countDuplicates(arr, size);
    printf("Total number of duplicate elements in the array: %d\n", duplicates);
    return 0;
}

// 8. Write a function in C to print all unique elements in an array.
#include <stdio.h>

int isUnique(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 0;  // Not unique
        }
    }
    return 1;  // Unique
}

void printUniqueElements(int arr[], int size) {
    printf("Unique elements in the array: ");
    for (int i = 0; i < size; i++) {
        if (isUnique(arr, size, arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printUniqueElements(arr, size);
    return 0;
}

// 9. Write a function in C to merge two arrays of the same size sorted in descending order.
#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int size, int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] > arr2[i] ? arr1[i] : arr2[i];
    }
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], result[size];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    mergeArrays(arr1, arr2, size, result);

    printf("Merged array in descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}

// 10. Write a function in C to count the frequency of each element of an array.
#include <stdio.h>

void countFrequency(int arr[], int size, int freq[]) {
    for (int i = 0; i < size; i++) {
        freq[i] = 1;  // Initialize frequency to 1
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                freq[i]++;
                arr[j] = -1;  // Mark as visited
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size], freq[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    countFrequency(arr, size, freq);

    printf("Frequency of elements in the array:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] != -1) {
            printf("%d: %d\n", arr[i], freq[i]);
        }
    }
    return 0;
}
