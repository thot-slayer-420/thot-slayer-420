/*
 * ================================================================
 * Author		:	<your_name>
 * Version		:	<version_num>
 * Copyright	:	Staffordshire University (c) 2023
 * Licence		:	See LICENSE in repository for more information
 * Description	:	<A brief description, or point user to README
					in repository for further information>

					This template project sets the /Tc and /Za
					flags for MSVC++ compiler. The suppress
					warnings directive is included below but can
					alternatively be provided in the preprocessor
					settings.
 * ================================================================
 */


 /* Preprocessor Directives */
#define _CRT_SECURE_NO_WARNINGS


/* Included Libraries */
#include <stdio.h>
#include <ctype.h>


int main(void)
{
	int c;
	int i = 0;
	for (; i < 5; ++i)
	{
		printf("Give a character ");
		c = getchar();
		while(getchar() != '\n');

		printf("%c is a ", c);
		if (isdigit(c)) { printf("number"); }
		else if (ispunct(c)) { printf("punctuation"); }
		else if (isspace(c)) { printf("space"); }
		else if (isalpha(c)) { printf("letter"); }
		else if (!isblank(c)) { printf("something"); }
		else { printf("nothing"); }
		printf("\r\n");
	}
	return 0;
}