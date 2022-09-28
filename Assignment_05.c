// 01) Write a program to print MySirG N times on the screen.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("MySirG ");
    return 0;
}

// 02) Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d \n",i);
    return 0;
}

// 03) Write a program to print the first N natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        printf("%d \n",i);
    return 0;
}

// 04) Write a program to print the first N odd natural numbers.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d \n",2*i-1);
    return 0;
}

// 05) Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        printf("%d \n",2*i-1);
    return 0;
}

// 06) Write a program to print the first N even natural numbers.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d \n",2*i);
    return 0;
}

// 07) Write a program to print the first N even natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        printf("%d \n",2*i);
    return 0;
}

// 08) Write a program to print squares of the first N natural numbers.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d \n",i*i);
    return 0;
}

// 09) Write a program to print cubes of the first N natural numbers.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d \n",i*i*i);
    return 0;
}

// 10) Write a program to print a table of N numbers.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
        printf("%d \n",n*i);
    return 0;
}