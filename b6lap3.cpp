#include <stdio.h>

int main() 
{  
    double km;
    double mile;
    printf("Input km: ",km);
    scanf("%lf", &km);
    mile = 0.62137119*km;
    printf("mile = %lf", mile);
    printf("\n");
    return 0;
}
