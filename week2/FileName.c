#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void alphabet()
{
	char i = 65;
	for (; i <= 90; ++i)
	{
		printf("%c %c \r\n", i, i + 32);
	}
}

int main()
{
	alphabet();

	return 0;
}