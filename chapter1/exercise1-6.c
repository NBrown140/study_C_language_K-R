#include <stdio.h>

// Verify that the expresion getcjar() != EOF is 0 or 1


main()
{
    char a = 'a';
    char eof = EOF;
    printf("%d\n", a != EOF);
    printf("%d\n", eof != EOF);

}
