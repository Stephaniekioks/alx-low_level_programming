#include "main.h"

/** 
 * main - Entry point
 * print _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
        char str[] = "_putchar\n";
        int ch;

        for (ch = 0; ch <= 8; ch++)
        {
        _putchar(str[ch]);
        }
        return (0);
}
