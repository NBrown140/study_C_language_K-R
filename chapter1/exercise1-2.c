#include <stdio.h>

// Experiment to find out what happens when printf's arguemnt string contains \c, where c is some character not listed above.

main()
{
    printf("a\na\ta\"a\\a\b");
    printf("a\aa\ba\ca\da\ea");
}