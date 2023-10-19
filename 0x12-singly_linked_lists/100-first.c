#include <stdio.h>

void before_main() __attribute__((constructor));

void before_main()
{
	printf("You're beat! and yet, you muct allow,\nI bore my house upon my back!\n");
}
