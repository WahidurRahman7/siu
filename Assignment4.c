#include <stdio.h>

int main()
{
    double a,b,c,d,e,total,avg;

    printf("Enter the value of a: \n");
    scanf("%lf", &a);
    printf("A is , %lf\n",a);

    printf("Enter the value of b: \n");
    scanf("%lf", &b);
    printf("B is , %lf\n",b);

    printf("Enter the value of c: \n");
    scanf("%lf", &c);
    printf("C is , %lf\n",c);

    printf("Enter the value of d: \n");
    scanf("%lf", &d);
    printf("D is , %lf\n",d);

    printf("Enter the value of e: \n");
    scanf("%lf", &e);
    printf("E is , %lf\n",e);

    total=a+b+c+d+e;
    printf("The total is:%lf\n",total);


    avg=(a+b+c+d+e)/5;
    printf("The average is:%lf\n",avg);



    return 0;
}
