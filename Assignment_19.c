// 1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
#include <stdio.h>
#include <ctype.h>

int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char strings[5][100];

    printf("Enter 5 strings:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s", strings[i]);
    }

    printf("Number of vowels in each string:\n");
    for (int i = 0; i < 5; i++) {
        printf("String %d: %d vowels\n", i + 1, countVowels(strings[i]));
    }

    return 0;
}

// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include <stdio.h>
#include <string.h>

void sortCityNames(char cities[][50], int n) {
    char temp[50];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(cities[i], cities[j]) > 0) {
                strcpy(temp, cities[i]);
                strcpy(cities[i], cities[j]);
                strcpy(cities[j], temp);
            }
        }
    }
}

int main() {
    int n = 10;
    char cities[10][50];

    printf("Enter 10 city names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", cities[i]);
    }

    sortCityNames(cities, n);

    printf("Sorted city names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", cities[i]);
    }

    return 0;
}

// 3. Write a program to read and display a 2D array of strings in C language.
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    char strings[rows][cols][100];

    printf("Enter %d strings:\n", rows * cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%s", strings[i][j]);
        }
    }

    printf("2D array of strings:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%s\t", strings[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 4. Write a program to search a string in the list of strings.
#include <stdio.h>
#include <string.h>

int searchInList(char strings[][50], int n, char searchStr[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(strings[i], searchStr) == 0) {
            return i;  // String found at index i
        }
    }
    return -1;  // String not found
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char strings[n][50];

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    char searchStr[50];
    printf("Enter the string to search: ");
    scanf("%s", searchStr);

    int index = searchInList(strings, n, searchStr);
    if (index != -1) {
        printf("String '%s' found at index %d.\n", searchStr, index);
    } else {
        printf("String '%s' not found.\n", searchStr);
    }

    return 0;
}

// 5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of email addresses: ");
    scanf("%d", &n);

    char emails[n][100];

    printf("Enter %d email addresses:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", emails[i]);
    }

    int oddEmailFound = 0;

    for (int i = 0; i < n; i++) {
        char *atPos = strchr(emails[i], '@');
        if (atPos == NULL) {
            printf("Odd email out: %s\n", emails[i]);
            oddEmailFound = 1;
            break;
        }
    }

    if (!oddEmailFound) {
        printf("No odd email found.\n");
    }

    return 0;
}

// 6. Write a program to print the strings which are palindrome in the list of strings.
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;  // Not palindrome
        }
    }
    return 1;  // Palindrome
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char strings[n][50];

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    printf("Palindrome strings:\n");
    for (int i = 0; i < n; i++) {
        if (isPalindrome(strings[i])) {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}

// 7. From the list of IP addresses, check whether all ip addresses are valid.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValidIPAddress(char str[]) {
    int numCount = 0;
    int dotCount = 0;
    char *token = strtok(str, ".");

    while (token != NULL) {
        int num = atoi(token);
        if (num < 0 || num > 255) {
            return false;
        }
        numCount++;
        token = strtok(NULL, ".");
    }

    return numCount == 4 && dotCount == 3;
}

int main() {
    int n;
    printf("Enter the number of IP addresses: ");
    scanf("%d", &n);

    char ipAddresses[n][100];

    printf("Enter %d IP addresses:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", ipAddresses[i]);
    }

    printf("Valid IP addresses:\n");
    for (int i = 0; i < n; i++) {
        if (isValidIPAddress(ipAddresses[i])) {
            printf("%s\n", ipAddresses[i]);
        }
    }

    return 0;
}

// 8. Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words.(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”, OUTPUT : 1 )
#include <stdio.h>
#include <string.h>
#include <limits.h>

int minDistance(char words[][50], int n, char word1[], char word2[]) {
    int index1 = -1;
    int index2 = -1;
    int minDist = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (strcmp(words[i], word1) == 0) {
            index1 = i;
            if (index2 != -1) {
                minDist = index1 - index2;
            }
        } else if (strcmp(words[i], word2) == 0) {
            index2 = i;
            if (index1 != -1) {
                minDist = index2 - index1;
            }
        }
    }

    return minDist;
}

int main() {
    int n;
    printf("Enter the number of words: ");
    scanf("%d", &n);

    char words[n][50];

    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    char word1[50], word2[50];
    printf("Enter the two words: ");
    scanf("%s %s", word1, word2);

    int distance = minDistance(words, n, word1, word2);
    printf("Minimum distance between '%s' and '%s': %d\n", word1, word2, distance);

    return 0;
}

// 9. Write a program that asks the user to enter a username. If the username entered is one of the names in the list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed
#include <stdio.h>
#include <string.h>

int authenticateUser(char userList[][50], int n, char username[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(userList[i], username) == 0) {
            return 1;  // User found
        }
    }
    return 0;  // User not found
}

int main() {
    int n;
    printf("Enter the number of users: ");
    scanf("%d", &n);

    char users[n][50];

    printf("Enter %d usernames:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", users[i]);
    }

    char username[50];
    printf("Enter your username: ");
    scanf("%s", username);

    if (authenticateUser(users, n, username)) {
        printf("Authentication successful. You can calculate factorial.\n");
    } else {
        printf("Authentication failed. You are not authorized.\n");
    }

    return 0;
}

// 10. Create an authentication system. It should be menu driven.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool authenticateUser(char userList[][50], int n, char username[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(userList[i], username) == 0) {
            return true;  // User found
        }
    }
    return false;  // User not found
}

int main() {
    int n;
    printf("Enter the number of users: ");
    scanf("%d", &n);

    char users[n][50];

    printf("Enter %d usernames:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", users[i]);
    }

    char username[50];
    printf("Enter your username: ");
    scanf("%s", username);

    if (authenticateUser(users, n, username)) {
        int choice;
        while (1) {
            printf("\nMenu:\n");
            printf("1. Calculate factorial\n");
            printf("2. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                int num, factorial = 1;
                printf("Enter a number: ");
                scanf("%d", &num);

                for (int i = 1; i <= num; i++) {
                    factorial *= i;
                }

                printf("Factorial of %d is %d\n", num, factorial);
            } else if (choice == 2) {
                printf("Exiting...\n");
                break;
            } else {
                printf("Invalid choice. Please try again.\n");
            }
        }
    } else {
        printf("Authentication failed. You are not authorized.\n");
    }

    return 0;
}
