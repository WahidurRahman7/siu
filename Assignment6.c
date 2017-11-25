#include <stdio.h>
#include <math.h>
int main()
{

    double deposite,total,time;
    scanf("%lf",&deposite);
    scanf("%lf",&time);

    total=pow((1.075),time)*deposite;
    printf("Total Amount= %lf",total);


    return 0;
}
