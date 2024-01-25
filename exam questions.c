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

// ---------------------------------------------------ass QUES 10 C----------------------------------------------------------------------------------------
//    -------------
//     | 1     |
//     | 22    |
//     | 333   |
//     | 4444  |
//     | 55555 |
//     --- -- -- --

// int main()
// {

//     for (int i = 1; i < 6; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", i);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// ---------------------------------------------------ass QUES 10 D----------------------------------------------------------------------------------------
//    -------------
// //
//         *
//        ***
//       ******
//      ********
//     --- -- -- --

// int main()
// {
//     int r = 5;
//     for (int i = 1; i < 6; i++)
//     {
//         for (int j = r; j >= i; j--)
//         {
//             printf(" ");
//         }
//--------------------------------+++:: notice only single nesting of for loop inner loops are iindependent
//         for (int k = 0; k < (2 * i) - 1; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// ----------------------------------------------------ass QUES 11----------------------------------------------------------

//--------------------Fibonacci Series---------------------//

// int fibo(int n)
// {

//     if (n <= 1)
//     {
//         return n;
//     }

//     else
//         return fibo(n - 1) + fibo(n - 2);
// }

// int print(int n)
// {
//     for (int i = 0; i < n; ++i)
//     {
//         printf("\t: %d :", fibo(i));
//     }
// }

// int main()
// {
//     int n1 = 11, n2 = 15;

//     print(n1);
//     printf("\n\n");
//     print(n2);

//     return 0;
// }

//-------------------------------------------ass QUES 12------------------------------------------------------

// int fact(int n)
// {
//     if (n > 1)
//         return n * fact(n - 1);

//     else
//         printf("NUMBER IS SAMLLER THAN OR EQUAL TO 1");
//     return 1;
// }

// int main()
// {
//     int N;

//     printf("ENTER A NUMBER");
//     scanf("%d", &N);
//     int res = fact(N);
//     printf("\n%d::\t%d", N, res);

//     return 0;
// }

//---------------------------------------------------------------------ass QUES 13---------------------------------------------------------------------

// int GCD(int a, int b)
// {
//     if (b !=0)
//         return GCD(b, a % b);
//     else
//         return a;
// }

// int main()
// {
//     int a, b;

//     printf("ENTER 1ST NUMBER");
//     scanf("%d", &a);

//     printf("ENTER 2ND NUMBER");
//     scanf("%d", &b);

//     printf("GCD OF %d & %d IS :: %d", a, b, GCD(a, b));
//     return 0;
// }

//---------------------------------------------------------------ass QUES 15----------------------------------------------------------------------------

// int main()
// {

//     // 2D array declaration
//     int arr[6] = {10, 20, 30, 40, 50, 60}, ele = 0;

//     printf("Enter the element to search");
//     scanf("%d", &ele);

//     // printing elements
//     for (int i = 0; i <= 6; i++)
//     {
//         if (ele == arr[i])
//         {
//             printf("found %d on %d position", arr[i], i + 1);
//             break;
//         }
//         else if (i==6)
//         {
//             printf("Element not found");
//         }

//     }

//     return 0;
// }

//---------------------------------------------------------------ass QUES 16----------------------------------------------------------------------------

// int main()
// {

//     // declaring and initializing 2d array
// int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

//     printf("2D Array:\n");
//     // printing 2d array
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("%d  ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (i=j)
//             printf("%d  ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
