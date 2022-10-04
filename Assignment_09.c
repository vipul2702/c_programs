// 1. Write a program which takes the month number as an input and display number of days in that month.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a month number from 1...12 :");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Number of days in January is 31");
        break;
    case 2:
        printf("Number of days in February is 28/29");
        break;
    case 3:
        printf("Number of days in March is 31");
        break;
    case 4:
        printf("Number of days in April is 30");
        break;
    case 5:
        printf("Number of days in May is 31");
        break;
    case 6:
        printf("Number of days in June is 30");
        break;
    case 7:
        printf("Number of days in July is 31");
        break;
    case 8:
        printf("Number of days in August is 31");
        break;
    case 9:
        printf("Number of days in September is 30");
        break;
    case 10:
        printf("Number of days in October is 31");
        break;
    case 11:
        printf("Number of days in November is 30");
        break;
    case 12:
        printf("Number of days in December is 31");
        break;
    
    default: printf("Invalid choice");
        break;
    }
    
    return 0;
}

/* 2. Write a menu driven program with the following options:
    a. Addition
    b. Subtraction
    c. Multiplication
    d. Division
    e. Exit */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,choice;
    printf("Enter your choice given below\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("Enter two numbers :");
            scanf("%d%d",&a,&b);
            printf("Sum of %d and %d is %d",a,b,a+b);
            break;
    case 2: printf("Enter two numbers :");
            scanf("%d%d",&a,&b);
            printf("Difference of %d and %d is %d",a,b,a-b);
            break;
    case 3: printf("Enter two numbers :");
            scanf("%d%d",&a,&b);
            printf("Product of %d and %d is %d",a,b,a*b);
            break;
    case 4: printf("Enter two numbers :");
            scanf("%d%d",&a,&b);
            printf("Quotient of %d and %d is %d",a,b,a/b);
            break;
    case 5: exit(0);
            break;
    
    default: printf("Invalid choice");
            break;
    }

    return 0;
}

// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a day number of a week from 1...7 :");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Today is Monday");
        break;
    case 2:
        printf("Today is Tuesday");
        break;
    case 3:
        printf("Today is wednesday");
        break;
    case 4:
        printf("Today is Thursday");
        break;
    case 5:
        printf("Today is Friday");
        break;
    case 6:
        printf("Today is Saturday");
        break;
    case 7:
        printf("Today is Sunday");
        break;
    default: printf("Invalid choice");
        break;
    }
    
    return 0;
}

/* 4. Write a menu driven program with the following options:
    a. Check whether a given set of three numbers are lengths of an
    isosceles triangle or not
    b. Check whether a given set of three numbers are lengths of sides of
    a right angled triangle or not
    c. Check whether a given set of three numbers are equilateral triangle
    or not
    d. Exit */

#include <stdio.h>
#include <stdlib.h>
int main()
{
        int a, b, c, choice;
    while(1)
    {
        printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
        printf("\n\nEnter your choice given below :-\n");
        printf("1. Isosceles triangle or not.\n2. Right angled triangle or not\n3. Equilateral triangle or not\n4. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
                printf("Enter sides of triangle :");
                scanf("%d%d%d", &a, &b, &c);
                if (a == b || b == c || c == a)
                        printf("Isosceles");
                else
                        printf("Not Isosceles");
                break;
        case 2:
                printf("Enter sides of triangle :");
                scanf("%d%d%d", &a, &b, &c);
                if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
                        printf("Right angled triangle");
                else
                        printf("Not Right angled triangle");
                break;
        case 3:
                printf("Enter sides of triangle :");
                scanf("%d%d%d", &a, &b, &c);
                if (a == b || b == c)
                        printf("Equilateral");
                else
                        printf("Not Equilateral");
                break;
        case 4:
                exit(0);
                break;

        default:
                printf("Invalid choice");
                break;
        }
    }
        return 0;
}    

/* 5. Convert the following if-else-if construct into switch case:
    if(var == 1)
    System.out.println("good");
    else if(var == 2)
    System.out.println("better");
    else if(var == 3)
    System.out.println("best");
    else
    System.out.println("invalid"); */

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number from 1...3 \n\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("Invalid");
    }
    return 0;
}

// 6. Program to check whether a year is a leap year or not. Using switch statement.

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a year \n");
    scanf("%d", &x);
    switch (x%100 == 0)
    {
    case 1:switch (x%400 == 0)
            {
            case 1: printf("leap year"); break;
            case 0: printf("Non leap year"); break;
            }break;   
    case 0: switch (x%4 == 0)
            {
            case 1: printf("leap year"); break;
            case 0: printf("Non leap year"); break;
            }break;
    }
    return 0;
}

/* 7. Program to take the value from the user as input electricity unit charges
    and calculate total electricity bill according to the given condition . Using
    the switch statement.
    For the first 50 units Rs. 0.50/unit
    For the next 100 units Rs. 0.75/unit
    For the next 100 units Rs. 1.20/unit
    For units above 250 Rs. 1.50/unit
    An additional surcharge of 20% is added to the bill. */

#include <stdio.h>
int main()
{
    float x,amount = 0,total = 0;
    printf("Enter electricity charge \n");
    scanf("%f", &x);
    switch (x <= 50)
    {
    case 1: amount = x*0.5;
            break;  
    case 0: switch (x <= 150)
            {
            case 1: amount = 25+(x-50)*0.75;
                    break;
            case 0: switch (x <= 250)
                    {
                    case 1 : amount=100+(x-150)*1.20;                     
                            break;
                    case 0 : amount=220+(x-250)*1.5;                     
                            break;
                    }break;
            }break;
    }
    total = amount + amount*0.20;
    printf("Total amount = %f",total);
    return 0;
}    

// 8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.

// 9. Program to Convert even number into its upper nearest odd number Switch Statement.

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number \n");
    scanf("%d", &x);
    switch (x%2==0)
    {
    case 1: printf("Upper nearest odd number is %d",x+1);
            break;  
    case 0: printf("Already an odd number %d",x);
            break;
    }
    return 0;
}

// 10. C program to find all roots of a quadratic equation using switch case.