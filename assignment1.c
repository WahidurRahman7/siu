#include <stdio.h>

int main()
{
    float mile, meter,cm;
    int distance=245;


    mile=distance/1.609344;
    meter = distance*1000;
    cm=distance*100000;


    printf("Length in Mile = %.2f mile \n", mile);
    printf("Length in Meter = %.2f m \n", meter);
    printf("Length in Centemeter = %.2f cm \n", cm);


    return 0;
}
