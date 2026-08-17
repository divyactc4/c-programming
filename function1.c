//program to find average of three numbers using function
#include<stdio.h>
float average(int x, int y, int z)
{   float av;
    av = (x + y + z)/3.0;
    return av;
}
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    float av = average(a, b, c);
    printf("the average is %.2f", av);
    return 0;
}
