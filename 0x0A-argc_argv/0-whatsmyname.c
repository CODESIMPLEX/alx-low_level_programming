#include <stdio.h>

/**
*main -> this is a function to print its name
*@argc: argc parameter
*@argv: an array of a command listed
*Return: 0 for succecc
*/
int main (int argc, char *argv[])
{

	int c = 0;

	while (c < argc)
	{
		if (c == 0)
		{
			printf("%s\n", argv[c]);
			break;
		}
	}
	return (0);
}
