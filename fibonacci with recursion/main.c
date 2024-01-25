#include <stdio.h>

int fibo(int n)
{
    if (n <= 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int printFibo(int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf(": %d :\t", fibo(i));
    }
}

int main()
{
    int num;

    printf("Enter Number ::");
    scanf("%d", &num);

    printFibo(num);

    return 0;
}
