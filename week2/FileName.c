#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void alphabet()
{
	/*prints all the letters of the alphabet
	A=65 and a=A+32
	Ascii indexes(97)*/
	char i = 65;
	for (; i <= 90; ++i)
	{
		printf("%c %c \r\n", i, i + 32);
	}
}

void activity6()
{
	/* bitwise */
	/* integers in binary using "0b" */
	int A = 0b0100;
	int B = 0b0101;

	/* A AND B */
	printf("A AND B: ");
	printf("%i  \r\n\n", A & B);

	/* A OR B */
	printf("A OR B: ");
	printf("%i  \r\n\n", A | B);

	/* A XOR B*/
	printf("A XOR B: ");
	printf("%i  \r\n\n", A ^ B);
}

int main()
{
	activity6();

	return 0;
}