#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void alphabet()
{
	for (char i = 65; i <= 90; ++i)
	{
		printf("%c %c", i, i + 32);
	}
}

int main()
{
	alphabet();

	return 0;
}