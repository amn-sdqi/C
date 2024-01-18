#include <stdio.h>

int Fact(int N)
{
    int fact = 1;
    for (int i = 1; i <= N; i++)
    {
        if (N == 0 || N == 1)
            fact = 1;
        else
            fact = fact * i;
        
    }
   
    return fact;
}

int main()
{
    int n, factorial = 0;

    scanf("%d", &n);

    factorial = Fact(n);

    printf("%d", factorial);

    return 0;
}
