#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI  ((double)3.14159265)

int main(void)
{
    float s = 0;
    float v = 0;
    float h_r = 0;

    while(EOF != scanf("%f", &s))
    {
        h_r = sqrt((2*s)/PI);        
        v = (s*s*h_r)/(3*(PI*h_r*h_r + 2*s));

        printf("%.2f\n", v);
        printf("%.2f\n", h_r);

        h_r = sqrt(s/(4*PI));

        printf("%.2f\n", h_r);
    }

    return 0;
}

