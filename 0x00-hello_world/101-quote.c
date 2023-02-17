#include <unistd.h>

/**
 * main - Entry point, writes to stderr
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    /* write to stderr */
    write(2, str, 59);
    return (1); /* indicate error */
}

