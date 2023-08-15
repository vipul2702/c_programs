// 1. Write a function to calculate length of the string.
#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// 2. Write a function to reverse a string.
#include <stdio.h>

void reverseString(char str[]) {
    int length = stringLength(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// 3. Write a function to compare two strings.
#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;  // Not equal
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;  // Equal
    } else {
        return 0;  // Not equal
    }
}

// 4. Write a function to transform string into uppercase
#include <stdio.h>
#include <ctype.h>

void stringToUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

// 5. Write a function to transform a string into lowercase
#include <stdio.h>
#include <ctype.h>

void stringToLowercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

// 6. Write a function to check whether a given string is an alphanumeric string or not.(Alphanumeric string must contain at least one alphabet and one digit)
#include <stdio.h>
#include <ctype.h>

int isAlphanumeric(char str[]) {
    int hasAlphabet = 0;
    int hasDigit = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            hasAlphabet = 1;
        }
        if (isdigit(str[i])) {
            hasDigit = 1;
        }
    }

    if (hasAlphabet && hasDigit) {
        return 1;  // Alphanumeric
    } else {
        return 0;  // Not alphanumeric
    }
}

// 7. Write a function to check whether a given string is palindrome or not.
#include <stdio.h>

int isPalindrome(char str[]) {
    int length = stringLength(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;  // Not palindrome
        }
    }
    return 1;  // Palindrome
}

// 8. Write a function to count words in a given string
#include <stdio.h>
#include <ctype.h>

int countWords(char str[]) {
    int wordCount = 0;
    int isWord = 0; // Flag to track if a word is being read

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            isWord = 0;
        } else if (!isWord) {
            isWord = 1;
            wordCount++;
        }
    }

    return wordCount;
}

// 9. Write a function to reverse a string word wise. (For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )
#include <stdio.h>
#include <string.h>

void reverseWordWise(char str[]) {
    int length = stringLength(str);
    int end = length - 1;

    for (int start = length - 1; start >= 0; start--) {
        if (str[start] == ' ' || start == 0) {
            int wordStart = (start == 0) ? 0 : start + 1;
            int wordEnd = end + 1;
            for (int i = wordStart; i < wordEnd; i++) {
                printf("%c", str[i]);
            }
            end = start - 1;
            if (start != 0) {
                printf(" ");
            }
        }
    }
}

// 10. Write a function to find the repeated character in a given string.
#include <stdio.h>

char findRepeatedCharacter(char str[]) {
    int frequency[256] = {0};  // Assuming ASCII character set

    for (int i = 0; str[i] != '\0'; i++) {
        frequency[str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (frequency[str[i]] > 1) {
            return str[i];
        }
    }

    return '\0';  // No repeated character found
}
