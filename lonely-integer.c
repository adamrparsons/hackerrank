#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#define FALSE 0
#define TRUE 1

int lonelyinteger(int a_size, int* a)
{
	int i, j, result, single;
	for (i=0;i<a_size;i++)
	{
		single = TRUE;
		for (j=0;j<a_size;j++)
		{
			if (i != j)
			{
				if (a[i] == a[j])
				{
					single = FALSE;
				}
			}
		}
		if (single == TRUE)
		{
			result = a[i];
		}

	}
	return result;
}

int main() {
    int res;
    
    int _a_size, _a_i;
    scanf("%d", &_a_size);
    int _a[_a_size];
    for(_a_i = 0; _a_i < _a_size; _a_i++) { 
        int _a_item;
        scanf("%d", &_a_item);
        
        _a[_a_i] = _a_item;
    }
    
    res = lonelyinteger(_a_size, _a);
    printf("%d\n", res);
    
    return 0;
}
