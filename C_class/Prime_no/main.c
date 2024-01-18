
#include <stdio.h>
#include <stdbool.h> //used in isPrime Function to pass boolean values

// A school method based C++ program to check if a
// number is prime
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;   /*if the number is divided by any integer between n-1 it will be no prime*/

    return true;
}
// Driver Program to test above function
int main()
{
    int Number = 11, sum = 0;
    for (int i = 0; i <= Number; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    printf("%d is the sum of prime number::", sum);
    return 0;
}
