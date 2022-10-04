// 01) WAP to check whether a given number is positive or non positive.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    if (n >= 0)
        printf("Positive");
    else
        printf("Non positive");
    return 0;
}

// 02) WAP to check whether a given number is divisible by 5 or not.

// 03) WAP to check whether a given number is an even or an odd number.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

// 04) WAP to check whether a given number is and even number or an odd numbers without using % operator.

// 05) WAP to check whether a given number is three digit or not.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    if (n > 99 && n < 1000)
        printf("yes a three digit number");
    else
        printf("Not a three digit number");
    return 0;
}

// 06) WAP to print greater between two numbers. Print one number if both numbers are same.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter value of a and b\n");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("a is greater");
    else if (a < b)
        printf("b is small");
    else
        printf("%d", a);
    return 0;
}

// 07) WAP to check whethter the roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

#include <stdio.h>
int main()
{
    int a, b, c, disc;
    printf("Enter value of a,b and c ");
    scanf("%d%d%d", &a, &b, &c);
    disc = b * b - 4 * a * c;
    if (disc > 0)
        printf("Real and Distinct");
    else if (disc < 0)
        printf("Imaginary");
    else
        printf("Real and equal");
    return 0;
}

// 08) WAP to check whether a given year is a leap year or not.

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a year \n");
    scanf("%d", &x);
    if (x % 100 == 0)
    {
        if(x%400 == 0)
            printf("leap year");
        else
            printf("Non leap year");
    }
    else if(x%4 == 0)
            printf("leap year");
         else
            printf("Non leap year");
    return 0;
}

// 09) WAP to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

// 10) WAP which takes the cost price and selling price of a product from user. Now calculate and print profit or loss percentage.

// 11) WAP to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter marks of 5 subjects \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if ((a >= 33) && (b >= 33) && (c >= 33) && (d >= 33) && (e >= 33))
        printf("Pass");
    else
        printf("Fail");
    return 0;
}

// 12) WAP to check whether a given alphabet is uppercase or lowercase.

#include <stdio.h>
int main()
{
    char x;
    printf("Enter a character \n");
    scanf("%c", &x);
    if (('a' <= x) && (x <= 'z'))
        printf("Lower case");
    if (('A' <= x) && (x <= 'Z'))
        printf("Upper case");
    return 0;
}

// 13) WAP to check whether a given number is divisible by 3 and divisible by 2.

// 14) WAP to check whether a given number is divisible by 7 or divisible by 3.

// 15) WAP to check whether a given number is positive, negative or zero.

// 16) WAP to check whether a given character is an alphabet(Upper case), an alphabet(lower case), a digit or a special character.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character \n");
    scanf("%c", &ch);
    if ((ch >= 'a') && (ch <= 'z'))
        printf("lower case");
    else if ((ch >= 'A') && (ch <= 'Z'))
        printf("Upper case");
    else if ((ch >= '0') && (ch <= '9'))
        printf("digit");
    else
        printf("A special character");
    return 0;
}

// 17) WAP which takes the length of sides of triangle as an input. Display whether the triangle is valid or not.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter sides of triangle \n");
    scanf("%d%d%d", &a, &b, &c);
    if ((a + b > c) && (b + c > a) && (a + c > b))
        printf("Triangle is valid");
    else
        printf("Not valid");
    return 0;
}

// 18) WAP which takes the month number as an input and display number of days in that month.