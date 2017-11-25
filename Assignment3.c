#include <stdio.h>

int main()
{
    double apple,applePrice,orange,orangePrice,grapes,grapesPrice,total;


    printf("How many apple do you need?: \n");
    scanf("%lf", &apple);
    printf("You need , %lf kg\n",apple);
    applePrice=(apple)*140;
    printf("The price of Apple is: %lf\n",applePrice);

    printf("How many orange do you need?: \n");
    scanf("%lf", &orange);
    printf("You need , %lf kg\n",orange);
    orangePrice=apple*90;
    printf("The price of Orange is: %lf\n",orangePrice);


    printf("How many grapes do you need?: \n");
    scanf("%lf", &grapes);
    printf("You need , %lf kg\n",grapes);
    grapesPrice=apple*360;
    printf("The price of Grapes is: %lf\n",grapesPrice);

    total=applePrice+ orangePrice+grapesPrice;
    printf("The total price is: %lf\n",total);


    return 0;
}
