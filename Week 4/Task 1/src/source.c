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
	int n;
	printf("enter a character:");
	n = getchar();
	if (islower(n)) { printf("%c", toupper(n)); }
	return 0;
}