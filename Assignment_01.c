// 01) WAP to print Hello Students on the screen.

#include<stdio.h>
int main()
{
    printf("Hello Students");
    return 0;
}

// 02) WAP to print Hello in the first line and Students in the second line.

#include<stdio.h>
int main()
{
    printf("Hello \n Students");
    return 0;
}

// 03) WAP to print "MySirG" on the screen. (Remenber to print in double quotes)

#include<stdio.h>
int main()
{
    printf(" \"MySirG\" ");
    return 0;
}

// 04) WAP to print area of the circle. Take radius of circle as input from user and print the result.

#include<stdio.h>
int main()
{
    int r;
    float a;
    printf("Enter the radius : ");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of circle %.3f having the radius %d",a,r);
    return 0;
}

// 05) WAP to calculate the length of string using printf function.

#include<stdio.h>
int main()
{
    int x = printf("Vipul");
    printf("%d",x);
    return 0;
}

// 06) WAP to print the name of the user in double quotes.

#include<stdio.h>
int main()
{
    printf(" \"Hello , Amit Kumar \"");
    return 0;
}

// 07) WAP to print "%d" on the screen.

#include<stdio.h>
int main()
{
    printf("%%d");
    return 0;
}

// 08) WAP to print "\n" on the screen.

#include<stdio.h>
int main()
{
    printf("\\n");
    return 0;
}

// 09) WAP to print "\\" on the screen.

#include<stdio.h>
int main()
{
    printf("\\\\");
    return 0;
}

// 10) WAP to take date as and input in below given format and convert the date format and display the result as given below.

#include<stdio.h>
int main()
{
    int day,mon,yr;
    printf("Enter the date in DD/MM/YYYY format : ");
    scanf("%d/%d/%d",&day,&mon,&yr);
    printf("Day-%d,Month-%d,Year-%d",day,mon,yr);
    return 0;
}

// 11) WAP to take time as and input in below given format and convert the time format and display the result as given below.

#include<stdio.h>
int main()
{
    int hour,min;
    printf("Enter the time in HH:MM format : ");
    scanf("%d:%d",&hour,&min);
    printf("%d Hour and %d Minute",hour,min);
    return 0;
}