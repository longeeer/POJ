#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    unsigned int a = 0;
    unsigned int b = 0;

    scanf("%u %u", &a, &b);

    printf("%u\n", (a + b));

    return 0;
}

