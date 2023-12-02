#include <stdio.h>

//----------------------Ignoring Leap year------------------

int main()
{
    int D, y, w, d;

    printf("Enter No of days::");
    scanf("%d", &D);

    y = D / 365;
    printf("\nYears:%d", y);

    w = (D % 365) / 7;
    printf("\nWeeks:%d", w);

    d = D - ((y * 365) + (w * 7));
    printf("\nDays:%d", d);
    return 0;
}

//--------------------------------------------End----------------------------------------
