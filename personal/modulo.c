#include <stdio.h>

int main(void)
{
	/* Variable Declaration */
	int a;
	int b;

	/* Variable Initialization */
	a = 25;
	b = 4;

	/* Using modulo % to get the reminder */
	int remainder = a % b;

	printf("The remainder of %d divided by %d is %d\n", a, b, remainder);

	return (0);
}
