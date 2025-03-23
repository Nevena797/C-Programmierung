#include <stdio.h>

int main()
{
	int cel;
	float fahrenheit;
	for (cel = 50; cel >= -50; cel = cel - 10)
	{
		fahrenheit = (cel * 9.0 / 5.0) + 32;
		printf("%3d°C  =  %7.2f°F\n", cel, fahrenheit);
	}
}


