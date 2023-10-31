#define _CRT_SECURE_NO_WARNINGS
#include <ctype.h>
#include <stdio.h>

void clear_buffer(int user_input)
{
	if (user_input != 10)
			{
				int clear_buffer = getchar();
				while (clear_buffer != 10 )
				{
					clear_buffer = getchar();
				}
			}
}

void challenge_task()
{
	float target_angle;
	int user_input;
	int want_to_exit = 0;
	while (!want_to_exit)
	{
		printf("Give me the target angle of the servo between -90.0 and 90.0: ");
		user_input = getchar();
		printf("%c", user_input);
		clear_buffer(user_input);

		int valid_input = 0;
		printf("\n\rDo you want to exit?");
		do {
			user_input = getchar();
			printf("%c\r\n", user_input);
			clear_buffer(user_input);
			switch (toupper(user_input))
			{
			case 'Y':
				want_to_exit = 1;
				valid_input = 1;
				break;
			case 'N':
				valid_input = 1;
				break;
			default:
				printf("Invalid input%c",10);
				break;
			}
		} while (valid_input == 0);

	}
}



int main()
{
	challenge_task();




	return 0;
}