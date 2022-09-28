// 01) WAP to print MySirG 5 times on the screen.

#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=5;i++)
        printf("MySirG ");
    return 0;
}

// 02) WAP to print the first 10 natural numbers.

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d",i);
    return 0;
}

// 03) WAP to print the first 10 natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i;
    for(i=10;i>=1;i--)
        printf("%d \n",i);
    return 0;
}

// 04) WAP to print the first 10 odd natural numbers.

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d",2*i-1);
    return 0;
}

// 05) WAP to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i;
    for(i=10;i>=1;i--)
        printf("%d \n",2*i-1);
    return 0;
}

// 06) WAP to print the first 10 even natural numbers. 

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d",2*i);
    return 0;
}

// 07) WAP to print the first 10 even natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i;
    for(i=10;i>=1;i--)
        printf("%d \n",2*i);
    return 0;
}

// 08) WAP to print squares of the first 10 natural numbers.

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d",i*i);
    return 0;
}

// 09) WAP to print cubes of the first 10 natural numbers.

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d",i*i*i);
    return 0;
}

// 10) WAP to print a table of 5.

#include<stdio.h>
int main()
{
    int i,x=5;
    for(i=1;i<=10;i++)
        printf("%d\n",x*i);
    return 0;
}