#include <stdio.h>

int GCD(int a, int b)
{
    if (b !=0)
    {
        return GCD(b, a % b);
    }
    else
        return a;
}

int main()
{
    int a, b;

    printf("Enter 1st Number");
    scanf("%d", &a);

    printf("Enter 2nd Number");
    scanf("%d", &b);

    printf("GCD of %d , %d is %d", a, b, GCD(a, b));
    return 0;
}

