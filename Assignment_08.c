// WAP to draw the following patterns.

// 1) 
/*
            *
            **
            ***
            ****
            *****
*/

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// 2)
/*
                *
               **
              ***
             ****
            *****
*/

// 3)
/*
            *****
            ****
            ***
            **
            *
*/

// 4)
/*
            *****
             ****
              ***
               **
                *
*/

// 5)
/*
            *
           ***
          *****
         *******
        *********
*/

// 6)
/*
        *********
         *******
          *****
           ***
            *
*/

// 7)
/*
        *********
         *******
          *****
           ***
            *
*/

// 8)
/*
            1
           121
          12321
         1234321
       
*/

#include <stdio.h>
int main()
{
    int i, j, count = 0;
    for (i = 0; i <= 3; i++)
    {
        count = 0;
        for (j = 0; j < (6 / 2 - i); j++)
            printf(" ");
        for (j = 0; j <= i; j++)
            printf("%d", ++count);
        count--;
        while (count)
            printf("%d", count--);
        printf("\n");
    }
    return 0;
}