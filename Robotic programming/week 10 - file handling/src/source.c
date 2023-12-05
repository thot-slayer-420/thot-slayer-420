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
#include <math.h>
#include <stdlib.h>
#include <time.h>


void task1()
{
	// Opening the file for writing
	FILE* test_file;
	test_file= fopen("test file.txt", "w");

	// Getting the time
	time_t current_time;
	time(&current_time);

	printf("time: %s", ctime(&current_time));
	// fprintf(test_file, "");

}



int main(void)
{



	return 0;
}