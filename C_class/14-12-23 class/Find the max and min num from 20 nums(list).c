#include <stdio.h>
#include <stdlib.h>

int max1_max2(int arr[])
{

    int i, max = 0, max2 = 0;

    for (i = 0; i < 20; i++)
    {
        if (arr[i] >= max)
        {
            max2 = max;
            max = arr[i];
            printf("\n\n %d", max);
            printf("\n\n %d", max2);
        }
    }

    printf("\n\n\t\t%d", max);
    printf("\n\n\t\t%d", max2);
}

int main()
{
    int arr[20] = {12, 43, 44, 2, 35, 46, 65, 54, 54, 54, 34, 56, 3, 4, 3, 43, 17, 36, 79, 28};
    int n, i;

    printf("Enter Index to replace : ");
    scanf("%d", &n);

    for (i = 0; i < 20; i++)
    {
        if (i == n)
        {
            arr[i + i] = arr[i];
        }
    }

    for (i = 0; i < 20; i++)
    {
        printf("\n: %d ", arr[i]);
    }

    return 0;
}
