#include <unistd>


/**
 * main - prints "and the piece of art is useful"
 * - Dora Korpar, 2015-10-19",followed by new
 *   line, to standard error.
 *   Return: Always 1.
 */

int main(void)

{
	write(2, "and the piece of art is useful\" - Dora Kopar, 2015-10-19\n", 59);
	return (1);
}
