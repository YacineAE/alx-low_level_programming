#include <unistd.h>
/**
 *main - Entry point
*/
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t myVar = write(2, message, 59);

	if (myVar == -1)
	{
		return (1);
	}
	return (1);
}
