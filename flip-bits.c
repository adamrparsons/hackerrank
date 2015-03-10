#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

int main() {

uint32_t num;
int i, j, n;
scanf("%d", &n);
int a[n];
for (i=0;i<n;i++)
{
	scanf("%d", &a[i]);
}
for (j=0;j<n;j++)
{

	num = a[j];
	for (i=0;i<32;i++)
	{
		num ^= 1 << i;
	}
	printf("%u\n", num);
}
    return 0;
}

