// 1. Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h>
float areaofcircle(float r)
{
    return (3.14 * r * r);
}
int main()
{
    printf("Area of circle is %.3f", areaofcircle(5.0));
    return 0;
}

// or

#include <stdio.h>
float areaofcircle(float);
int main()
{
    printf("Area of circle is %.3f", areaofcircle(5));
    return 0;
}
float areaofcircle(float r)
{
    return (3.14 * r * r);
}

// 2. Write a function to calculate simple interest. (TSRS)

#include <stdio.h>
int simpleInt(int, int, int);
int main()
{
    printf("simple interest is %d", simpleInt(5000, 10, 4));
    return 0;
}
int simpleInt(int p, int r, int t)
{
    return (p * r * t / 100);
}

// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include <stdio.h>
int evenorodd(int);
int main()
{
    printf("%d", evenorodd(7));
    return 0;
}
int evenorodd(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

// 4. Write a function to print first N natural numbers (TSRN)

#include <stdio.h>
void naturalnumbers(int);
int main()
{
    naturalnumbers(50);
    return 0;
}
void naturalnumbers(int n)
{
    int i;
    for (i = 1; i <= n; i++)
        printf("%d ", i);
}

// 5. Write a function to print first N odd natural numbers. (TSRN)

#include <stdio.h>
void oddnaturalnumbers(int);
int main()
{
    oddnaturalnumbers(10);
    return 0;
}
void oddnaturalnumbers(int n)
{
    int i;
    for (i = 1; i <= n; i++)
        printf("%d ", 2 * i - 1);
}

// 6. Write a function to calculate the factorial of a number. (TSRS)

#include <stdio.h>
int fact(int n);
int main()
{
    printf("Factorial is %d ", fact(6));
    return 0;
}
int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>
int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int comb(int n, int r)
{
    return (fact(n) / (fact(n - r) * fact(r)));
}
int main()
{
    printf("%d ", comb(9, 3));
    return 0;
}

// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include <stdio.h>
int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int perm(int n, int r)
{
    return (fact(n) / (fact(n - r)));
}
int main()
{
    printf("%d ", perm(5, 2));
    return 0;
}

// 9. Write a function to check whether a given number contains a given digit or not.(TSRS)

#include <stdio.h>
int containsdigit(int n)
{
    int rem;
    while (n)
    {
        rem = n % 10;
        if (rem == n)
            return 1;
        n = n / 10;
    }
    return 0;
}
int main()
{
    printf("%d", containsdigit(2345));
    return 0;
}

// 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>
void primefactor(int n)
{
    int i;
    for (i = 2; n != 1; i++)
    {
        while (n % i == 0)
        {
            n = n / i;
            printf("%d, ", i);
        }
    }
}
int main()
{
    primefactor(36);
    return 0;
}