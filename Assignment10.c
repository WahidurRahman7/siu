#include <stdio.h>
#include <math.h>
int main()
{

    double son=58.33,wife=12.5,doughter=29.17,total;
    scanf("%lf",&total);
    total=total/100.0;
    printf("Son's Amount= %.2lf\n",total*son);
    printf("Wife's Amount= %.2lf\n",total*wife);
    printf("Daughter's Amount= %.2lf\n",total*doughter);


    return 0;
}
