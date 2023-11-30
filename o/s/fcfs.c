#include <stdio.h>

int main()
{
    int n, bt[20], wt[20], tat[20], avwt = 0, avtat = 0, i, j;

    printf("Enter Total Number of processes(max::20)");
    scanf("%d", &n);

    printf("Enter Busrt Time: \n");

    for (i = 0; i < n; i++)
    {
        printf("p[%d]", i + 1);
        scanf("%d", &bt[i]);
    }

    wt[0] = 0; // for first process waiting should be zero

    for (i = 0; i < n; i++)
    {
        wt[i] = 0;
        for (j = 0; j < i; j++)
        {
            wt[i] += bt[j];
        }
    }

    printf("\nProcess       Busrt time      Waiting Time        Turnaround Time");

    for (i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
        avwt += wt[i];
        avtat += tat[i];

        printf("\n p[%d]\t\t %d \t\t %d \t\t\t %d", i,  bt[i], wt[i], tat[i]);
    }

    return 0;
}