
#include <stdio.h>
#include <math.h>
int main()
{

    double deposite,total,time;
    scanf("%lf",&deposite);
    scanf("%lf",&time);

    total=deposite+(deposite*.085)*time;
    printf("Total Amount= %lf",total);


    return 0;
}
