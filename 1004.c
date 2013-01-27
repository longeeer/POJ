#include <stdlib.h>
#include <stdio.h>

#define MAX_MONTHS  ((float)12)

int main(void)
{
    float f_month = 0;
    float f_result = 0;
    int i = 0;

    while(EOF != scanf("%f", &f_month))
    {
        f_result += f_month;

        i++;

        if(MAX_MONTHS == i)
        {
            break;
        }
    }

    f_result = f_result / MAX_MONTHS;
    printf("$%.2f", f_result);

    return 0;
}

