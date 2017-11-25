#include <stdio.h>

int main()
{
    double a,b,area, pi=3.14;

    printf("Enter the value of a: \n");
    scanf("%lf", &a);
    printf("a is , %lf\n",a);

    printf("Enter the value of b: \n");
    scanf("%lf", &b);
    printf("b is , %lf\n",b);

    area=pi*a*b;
    printf("The total area is:%lf",area);



    return 0;
}
