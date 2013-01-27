#include <stdlib.h>
#include <stdio.h>

#define PI              ((float)(3.14159265))
#define AREA_PER_YEAR   ((float)50)

int main(void)
{
    int i = 0;
    int j = 0;
    int n = 0;
    int max = 0;
    int min = 0;
    float x = 0;
    float y = 0;
    float r_limit = 0;
    float s = 0;
    int result = 0;

    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        if(EOF != scanf("%f %f", &x, &y))
        {
            r_limit = ((x > y) ? x : y);
            s = (PI * r_limit * r_limit) / 2;
            max  = (s / AREA_PER_YEAR) + 1;

            r_limit = ((x > y) ? y : x);
            s = (PI * r_limit * r_limit) / 2;
            min  = (s / AREA_PER_YEAR) + 1;

            for (j = min; j <= max; j++)
            {
                if((x*x + y*y) < (100*j)/PI)
                {
                    result = j;
                }
            }

            printf("Property %d: This property will begin eroding in year %d.\n", (i + 1), result);
        }
    }

    printf("END OF OUTPUT.\n");

    return 0;
}

