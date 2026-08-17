//Q-Compare two strings without using predefined functions.
#include <stdio.h>
int main() 
{
    char str1[1000], str2[1000];
    int i = 0, areEqual = 1;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str2[i] != '\0') 
    {
        if (str1[i] != str2[i]) 
        {
            areEqual = 0;
            break;
        }
        i++;
    }

    if (str1[i] != str2[i]) 
    {
        areEqual = 0;
    }

    if (areEqual) 
    {
        printf("The strings are equal.\n");
    } 
    else 
    {
        printf("The strings are not equal.\n");
    }

    return 0;
}