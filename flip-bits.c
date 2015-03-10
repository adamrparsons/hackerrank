#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

int main() {

uint32_t num;
int i, n;
scanf("%d", &n);
num = 2147483647;
for (i=0;i<32;i++)
{
num ^= 1 << i;
}
printf("%u\n", num);

    return 0;
}

