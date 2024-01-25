//--------------------------------------------TRIANGLE PATTERN---------------------------------------------------------------
#include <stdio.h>

// int main()
// {

//     int i, j, rows, k = 0;
//     printf(" Enter a number to define the rows: \n");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= rows - i; j++)
//         {
//             printf("  ");
//         }
// use for loop where k is less than equal to (2 * i -1)
//         for (k = 1; k <= (2 * i - 1); k++)
//         {
//             printf("* "); // print the Star
//         }
//         printf("\n");
//     }
//     return 0;
// }

//--------------------------------------------------ass QUES 4------------------------------------------------------------

// #include <stdio.h>

// int main()
// {
//     int bonus, bal, g;

//     printf("Enter your balance");
//     scanf("%d", bal);
//     printf("1: Male \n 2: Female");
//     scanf("%d", g);

//     if (bal <= 1)
//     {
//         if (g == 1)
//         {
//             bonus = bal * (2 / 100);
//         }
//         else
//             -if (g == 2)
//             {
//                 if (bal >= 5000)
//                 {
//                     bonus = bal * (2 / 100) + (bal * (5 / 100));
//                 }
//                 else
//                     bonus = bal * (2 / 100);
//             }
//     }

//     printf("BONUS IS::%d", bonus);

//     return 0;
// }

//---------------------------------------------------ass QUES 5---------------------------------------------------------------

// int main()
// {
//     int marks;
//     char grade;

//     printf("ENTER MARKS:");
//     scanf("%d", marks);

//     if (marks >= 85)
//     {
//         grade = 'A';
//     }
//     else if (marks <= 85 && marks >= 75)
//     {
//         grade = 'B';
//     }
//     else if (marks <= 75 && marks >= 50)
//     {
//         grade = 'C';
//     }
//     else if (marks < 50 && marks >= 40)
//     {
//         grade = 'D';
//     }
//     else if (marks < 40)
//     {
//         grade = 'E';
//     }

//     printf("Grade is: %c", grade);

//     return 0;
// }

//--------------------------------------------------ass QUES 7----------------------------------------------------------

// int main()
// {
//     int n,sum=0;
//     printf("ENTER NUMBER:");
//     scanf("%d",&n);

//     while (n)
//     {
//         sum+=n%10;
//         n/=10;
//     }
//     printf("%d",sum);

//     return 0;
// }

//------------------------------------------------------ass QUES 10-----------------------------------------------------------

// int main()
// {
//     int a=1;
//     for (int i = 1; i < 6; i++)
//     {
//         for (int j = 1; j < i; j++)
//         {
//             printf("%d", a);
//             a++;
//         }
//         printf("\n");
//     }

//     return 0;
// }

// ---------------------------------------------------ass QUES 10 B----------------------------------------------------------------------------------------
//    -------------
//     | ***** |
//     |  **** |
//     |   *** |
//     |    ** |
//     |     * |
//     --- -- -- --

// int main()
// {
//     int r = 5;
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < r; j++)
//         {
//             if (j < i)
//             {
//                 printf("  ");
//             }
//             else
//             {
//                 printf(" *");
//             }
//         }

//         printf("\n");
//     }

//     return 0;
// }

// ---------------------------------------------------ass QUES 10 B----------------------------------------------------------------------------------------
//    -------------
//     | 1     |
//     | 22    |
//     | 333   |
//     | 4444  |
//     | 55555 |
//     --- -- -- --

int main()
{
    
}