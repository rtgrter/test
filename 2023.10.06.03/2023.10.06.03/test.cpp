#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int ch = 0;
	//end of file(-1)
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}