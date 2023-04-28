#include<lists.h>

/**
 * _Start - Apply the constructor attribute to Start
 */
void _Start(void) __attribute__ ((constructor));

/**
 * _Start - implemnt of Start
 */

void _Start(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
