#include <stdio.h>
int main (void)
{
	char *position = "back end";
	
		if (position == "front end" || position == "back end")
		{
			printf("Congratulations you got the job %s \n", position);
		}
		else
		{
			printf("Sorry %s is not needed\n", position);
		}
	return (0);
}

