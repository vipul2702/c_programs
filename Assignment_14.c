// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include <stdio.h>

int main() {
    // Initialize an array of size 10
    float num_array[10];

    // Take input from the user to fill the array
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &num_array[i]);
    }

    // Calculate the sum of numbers in the array
    float total_sum = 0;
    for (int i = 0; i < 10; i++) {
        total_sum += num_array[i];
    }

    // Display the sum
    printf("Sum of numbers: %f\n", total_sum);

    return 0;
}
// 2. Write a program to calculate the average of numbers stored in an array of size 10.Take array values from the user.
#include <stdio.h>

int main() {
    // Initialize an array of size 10
    float num_array[10];

    // Take input from the user to fill the array
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &num_array[i]);
    }

    // Calculate the sum of numbers in the array
    float total_sum = 0;
    for (int i = 0; i < 10; i++) {
        total_sum += num_array[i];
    }

    // Calculate the average
    float average = total_sum / 10;

    // Display the average
    printf("Average of numbers: %f\n", average);

    return 0;
}
// 3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
#include <stdio.h>

int main() {
    // Initialize an array of size 10
    int num_array[10];

    // Take input from the user to fill the array
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num_array[i]);
    }

    // Calculate the sum of even and odd numbers
    int sum_even = 0, sum_odd = 0;
    for (int i = 0; i < 10; i++) {
        if (num_array[i] % 2 == 0) {
            sum_even += num_array[i];
        } else {
            sum_odd += num_array[i];
        }
    }

    // Display the sums
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}
// 4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include <stdio.h>

int main() {
    // Initialize an array of size 10
    int num_array[10];

    // Take input from the user to fill the array
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num_array[i]);
    }

    // Find the greatest number
    int max_number = num_array[0];
    for (int i = 1; i < 10; i++) {
        if (num_array[i] > max_number) {
            max_number = num_array[i];
        }
    }

    // Display the greatest number
    printf("Greatest number in the array: %d\n", max_number);

    return 0;
}
// 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include <stdio.h>

int main() {
    // Initialize an array of size 10
    int num_array[10];

    // Take input from the user to fill the array
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num_array[i]);
    }

    // Find the smallest number
    int min_number = num_array[0];
    for (int i = 1; i < 10; i++) {
        if (num_array[i] < min_number) {
            min_number = num_array[i];
        }
    }

    // Display the smallest number
    printf("Smallest number in the array: %d\n", min_number);

    return 0;
}
// 6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Initialize an array of size 10
    int num_array[10];

    // Take input from the user to fill the array
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num_array[i]);
    }

    // Sort the array using bubble sort
    bubbleSort(num_array, 10);

    // Display the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", num_array[i]);
    }
    printf("\n");

    return 0;
}
// 7. Write a program to find second largest in an array.Take array values from the user.
#include <stdio.h>

int main() {
    // Initialize an array of size 10
    int num_array[10];

    // Take input from the user to fill the array
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num_array[i]);
    }

    // Find the largest and second largest numbers
    int largest = num_array[0];
    int second_largest = num_array[0];

    for (int i = 1; i < 10; i++) {
        if (num_array[i] > largest) {
            second_largest = largest;
            largest = num_array[i];
        } else if (num_array[i] > second_largest && num_array[i] != largest) {
            second_largest = num_array[i];
        }
    }

    // Display the second largest number
    printf("Second largest number: %d\n", second_largest);

    return 0;
}
// 8. Write a program to find the second smallest number in an array.Take array values from the user.
#include <stdio.h>

int main() {
    // Initialize an array of size 10
    int num_array[10];

    // Take input from the user to fill the array
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num_array[i]);
    }

    // Find the smallest and second smallest numbers
    int smallest = num_array[0];
    int second_smallest = num_array[0];

    for (int i = 1; i < 10; i++) {
        if (num_array[i] < smallest) {
            second_smallest = smallest;
            smallest = num_array[i];
        } else if (num_array[i] < second_smallest && num_array[i] != smallest) {
            second_smallest = num_array[i];
        }
    }

    // Display the second smallest number
    printf("Second smallest number: %d\n", second_smallest);

    return 0;
}
// 9. Write a program in C to read n number of values in an array and display it in reverse order.Take array values from the user.
#include <stdio.h>

int main() {
    int n;

    // Get the number of values from the user
    printf("Enter the number of values: ");
    scanf("%d", &n);

    // Initialize an array of size n
    int num_array[n];

    // Take input from the user to fill the array
    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &num_array[i]);
    }

    // Display the array in reverse order
    printf("Array in reverse order: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", num_array[i]);
    }
    printf("\n");

    return 0;
}
// 10. Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include <stdio.h>

int main() {
    int n;

    // Get the number of values from the user
    printf("Enter the number of values: ");
    scanf("%d", &n);

    // Initialize arrays of size n
    int source_array[n];
    int destination_array[n];

    // Take input from the user to fill the source array
    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &source_array[i]);
    }

    // Copy elements from source array to destination array
    for (int i = 0; i < n; i++) {
        destination_array[i] = source_array[i];
    }

    // Display the copied array
    printf("Source array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", source_array[i]);
    }
    printf("\n");

    printf("Copied array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination_array[i]);
    }
    printf("\n");

    return 0;
}
