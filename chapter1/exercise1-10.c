#include <stdio.h>

// Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\.
// This makes tabs and backspaces visible in an unambiguous way

main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        if (c == '\t')
        {
            putchar('\\t');
        }
        else if (c == '\b')
        {
            putchar('\\b');
        }
        else if (c == '\\')
        {
            putchar('\\');
        }
        else
            putchar(c);
        c = getchar();
    }
}