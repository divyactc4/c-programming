//Q-Write a c program to reverse a string without using pre-designed function and check wheather that string is palindrome.

#include <stdio.h>
int main() 
{
    char str[1000], reversed[1000];
    int length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0' && str[length] != '\n') 
    {
        length++;
    }

    for (int i = 0; i < length; i++) 
    {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';
    for (int i = 0; i < length; i++) 
    {
        if (str[i] != reversed[i]) 
        {
            isPalindrome = 0;
            break;
        }
    }

    printf("Reversed string: %s\n", reversed);
    if (isPalindrome) 
    {
        printf("The string is a palindrome.\n");
    } 
    else 
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}