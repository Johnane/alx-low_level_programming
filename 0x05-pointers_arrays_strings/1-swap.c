#include "main.h"

/**
 *swap_int - to swap values of two variables
 *
 *@a: first variable
 *@b: second variable
 */

void swap_int(int *a, int *b)

{
	int mid_man;

	mid_man = *a;
	*a = *b;
	*b = mid_man;

}
