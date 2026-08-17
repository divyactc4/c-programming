//Q- Write a c program to find the length of a string without using pre-defined functions.
#include <stdio.h>

int main() 
{
    char str[1000];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, 1000, stdin);
    while (str[length] != '\0'&& str[length] != '\n') 
    {
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}
