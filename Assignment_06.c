// 1. Write a program to calculate sum of first N natural numbers.

#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Enter value of n :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum + i;
    printf("Sum is %d \n", sum);
    return 0;
}

// 2. Write a program to calculate sum of first N even natural numbers.

#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter value of n where you want to sum of even natural number :");
    scanf("%d", &n);
    sum = n * (n + 1);
    printf("Sum of even natural number is %d", sum);
    return 0;
}

// 3. Write a program to calculate sum of first N odd natural numbers.

#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter value of n where you want to sum of odd natural number :");
    scanf("%d", &n);
    sum = n * n;
    printf("Sum of odd natural number is %d", sum);
    return 0;
}

// 4. Write a program to calculate sum of squares of first N natural numbers.

#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter value of n where you want to sum of squares of natural number :");
    scanf("%d", &n);
    sum = n * (n + 1) * (2 * n + 1) / 6;
    printf("Sum of squares of first N natural number is %d", sum);
    return 0;
}

// 5. Write a program to calculate sum of cubes of first N natural numbers.

#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter value of n where you want to sum of cubes of natural number :");
    scanf("%d", &n);
    sum = (n * (n + 1) / 2) * (n * (n + 1) / 2);
    printf("Sum of cubes of first N natural number is %d", sum);
    return 0;
}

// 6. Write a program to calculate factorial of a number.

#include <stdio.h>
int main()
{
    int i, fact = 1, n;
    printf("Enter value of n :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fact = fact * i;
    printf("Factorial of %d is %d \n", n, fact);
    return 0;
}

// 7. Write a program to count digits in a given number.

#include <stdio.h>
int main()
{
    int i, count = 0, n;
    printf("Enter value of n :");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("Number of digit is %d", count);
    return 0;
}

// 8. Write a program to check whether a given number is a Prime number or not.

#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter value of n\n");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Not a prime");
    else
        printf("Prime");
    return 0;
}

// 9. Write a program to calculate LCM of two numbers.

#include <stdio.h>
int main()
{
    int a, b, i;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a * b; i++)
    {
        if ((i % a == 0) && (i % b == 0))
            break;
    }
    printf("LCM is %d", i);
}

// 10. Write a program to reverse a given number.

#include <stdio.h>
int main()
{
    int x, i, rem;
    printf("Enter a number");
    scanf("%d", &x);
    for (i = 0; i <= x; i++)
    {
        rem = x % 10;
        x = x / 10;
        printf("%d", rem);
    }
    return 0;
}