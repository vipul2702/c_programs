// 01) WAP to print unit digit of a given number.

#include<stdio.h>
int main()
{   
    int x=12345,rem;
    rem = x%10;
    printf("%d",rem);
    return 0;
}

// 02) WAP to print a given number without its last digit.

#include<stdio.h>
int main()
{   
    int x=12345,result;
    result = x/10;
    printf("%d",result);
    return 0;
}

// 03) WAP to swap values of two int variables.

#include<stdio.h>
int main()
{   
    int a,b,temp;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("a=%d and b=%d \n",a,b);
        temp = a;
        a = b;
        b = temp;
    printf("a=%d and b=%d",a,b);
    return 0;
}

// 04) WAP to swap values of two int variables without using third variable.

#include<stdio.h>
int main()
{   
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("a=%d and b=%d \n",a,b);
        b = a+b;
        a = b-a;
        b = b-a;
    printf("a=%d and b=%d",a,b);
    return 0;
}

// 05) WAP to input a three digit number and display the sum of the digits.

#include<stdio.h>
int main()
{   
    int i,rem,sum=0,n;
    printf("Enter a three digit number :");
    scanf("%d",&n);
    for(i=0; i<=3; i++)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }   


    printf("Sum of the digits are %d",sum);
    return 0;
}

// 06) WAP which takes a character as an input and display its ASCII code.

#include<stdio.h>
int main()
{   
    char a;
    printf("Enter a character :");
    scanf("%c",&a);
    printf("%d",a);
    return 0;
}

// 07) WAP to find the position of 1 in LSB.

#include<stdio.h>
int main()
{   
    int x=4, count=0, result=0;
    while(x!=0)
    {
        result = x&1;
        count++;
        if(result==1)
        {
            printf("%d",count);
            break;
        }
        x=x>>1;
    }
    return 0;
}

// 08) WAP to check whether the given number is even or odd using bitwise operator.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if((x&1)==0)
        printf("Even number");
    else 
        printf("Odd number");
    return 0;
}

// 09) WAP to print size of an int, a float, a char and a double type variable.

#include<stdio.h>
int main()
{   double x;
    printf("Size is %d",sizeof(x));
    return 0;
}

// 10) WAP to make the last digit of a number stored in a variable as zero.

#include<stdio.h>
int main()
{   int x=2345;
    printf("%d \n",x);
        x = x/10;
        x = x*10;
    printf("%d",x);
    return 0;
}

// 11) WAP to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.

#include<stdio.h>
int main()
{   int x,y;
    printf("Enter a number and a digit :");
    scanf("%d%d",&x,&y);

    printf("Number=%d and Digit=%d\n",x,y);
        x = x*10;
        x = x+y;
    printf("Resulting number is %d",x);
    return 0;
}

// 12) Assume a price of 1 USD is INR 76.23. WAP to take the amount in INR and convert it into USD.

#include<stdio.h>
int main()
{   int inr;
    float usd;
    printf("Enter INR amount :");
    scanf("%d",&inr);
        usd = inr*76.23;
    printf("USD amount is %.3f",usd);
    return 0;
}

// 13) WAP to take a three digit number from the user and rotate its digits by one position towards the right.

#include<stdio.h>
int main()
{   
    int x=456,rem,quo;
    quo = x/10;
    rem = x%10;
    x = rem*100 + quo;
    printf("Result is %d",x);
    return 0;
}
