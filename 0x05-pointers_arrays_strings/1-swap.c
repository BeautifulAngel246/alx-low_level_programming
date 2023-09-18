#include "main.h"

/**
 *swap_int-swaps two integers values
 *@b:second
 *@a:first
 * Retun: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
