Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character using if-else.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c" , &ch);
     
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Entered character is an uppercase alphabet");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Entered character is an lowercase alphabet");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Entered character is a digit");
    }
    else
    {
        printf("Entered character is a special character");
    }
    return 0;
}