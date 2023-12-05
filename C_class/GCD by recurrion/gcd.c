#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b, r;

    printf("Enter 2 integer :");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b)
        r = gcd(a, b);
    else if (a < b)
        r = gcd(b, a);
    else
        r = a;

    printf("GCD of %d : %d :: %d", a, b, r);
}