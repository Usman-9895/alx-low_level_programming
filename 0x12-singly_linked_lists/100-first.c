#include <stdio.h>

/**
 * before_main - prints a message before the main function is executed
 *
 * Description: This function uses the printf function to print two lines of
 * text to the standard output. The message is printed before the main
 * function is executed, thanks to the constructor attribute.
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
