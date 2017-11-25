#include <stdio.h>

int main()
{
    double num1, num2;


    printf("Enter two numbers: ");
    scanf("%lf%lf", &num1, &num2);


    if(num1 > num2)
    {
        printf("%lf is maximum", num1);
    }


    if(num2 > num1)
    {
        printf("%lf is maximum", num2);
    }

    if(num1 == num2)
    {
        printf("Both are equal");
    }

    return 0;
}
