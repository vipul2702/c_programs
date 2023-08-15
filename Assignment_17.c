// 1. Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int length = stringLength(str);
    printf("Length of the string: %d\n", length);

    return 0;
}

// 2. Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>

int countCharacter(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("Enter a character: ");
    scanf(" %c", &ch);

    int occurrence = countCharacter(str, ch);
    printf("Occurrence of '%c' in the string: %d\n", ch, occurrence);

    return 0;
}

// 3. Write a program to count vowels in a given string
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
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int vowelCount = countVowels(str);
    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}

// 4. Write a program to convert a given string into uppercase
#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    convertToUppercase(str);
    printf("Uppercase string: %s\n", str);

    return 0;
}

// 5. Write a program to convert a given string into lowercase
#include <stdio.h>
#include <ctype.h>

void convertToLowercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    convertToLowercase(str);
    printf("Lowercase string: %s\n", str);

    return 0;
}

// 6. Write a program to reverse a string.
#include <stdio.h>

void reverseString(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>
#include <ctype.h>

void countCharacters(char str[], int *alphabets, int *digits, int *specialChars) {
    *alphabets = 0;
    *digits = 0;
    *specialChars = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            (*alphabets)++;
        } else if (isdigit(str[i])) {
            (*digits)++;
        } else {
            (*specialChars)++;
        }
    }
}

int main() {
    char str[100];
    int alphabets, digits, specialChars;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    countCharacters(str, &alphabets, &digits, &specialChars);

    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", specialChars);

    return 0;
}

// 8. Write a program in C to copy one string to another string.
#include <stdio.h>

void copyString(char source[], char destination[]) {
    int i;
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0'; // Don't forget to add the null terminator
}

int main() {
    char source[100], destination[100];
    printf("Enter a string: ");
    scanf("%[^\n]", source);

    copyString(source, destination);
    printf("Copied string: %s\n", destination);

    return 0;
}

// 9. Write a C program to sort a string array in ascending order.
#include <stdio.h>
#include <string.h>

void sortStrings(char strings[][50], int n) {
    char temp[50];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char strings[n][50];

    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf(" %[^\n]", strings[i]);
    }

    sortStrings(strings, n);

    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}

// 10. Write a program in C to Find the Frequency of Characters.
#include <stdio.h>
#include <ctype.h>

void findFrequency(char str[]) {
    int frequency[26] = {0};  // Assuming input contains only alphabetic characters

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            int index = tolower(str[i]) - 'a';
            frequency[index]++;
        }
    }

    printf("Frequency of characters:\n");
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            printf("%c: %d\n", 'a' + i, frequency[i]);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    findFrequency(str);

    return 0;
}
