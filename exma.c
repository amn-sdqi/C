#include <stdio.h>



int sum(int a, int b)
{
    int c;
    c=a+b;
    printf("%d",c);
    
    return c;
}

void sum1(int a, int b)
{
    int c;
    c = a + b;
    printf("%d", c);

}

int sum2()
{
    int a=5,b=6;
    
    int c;
    
    c = a + b;
    
    printf("%d", c);

    return c;
}

void sum4()
{
    int a = 5, b = 6;

    int c;

    c = a + b;

    printf("%d", c);
}

int main()
{
    int num1=5,num2=6;
    
    num1=sum4();
        

    sum(num1,num2);

    return 0;
}
