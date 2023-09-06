#include <stdio.h>
int main(void)
{
	int age = 15;

	if (age >= 40 && age <= 80)
	{
		printf("Your age is %i and qualified for the job!\n", age);
	}
	else if(age < 40)
	{
		printf("You age is %i and too small for the job\n", age);
	}
	else
	{
		printf("Your age is %i and  too old for the job!\n", age);
	}
}


