/* Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.*/

#include <stdio.h>
#define MAXLINE int 1000 //Maximum input line size

void reverse(char s[]);
int length(char s[]);
void copy(char to[], char from[]);

main()
{
    char in[5] = "abcde";
    printf(in);

    reverse(in);
    return 0;
}

// Reverse string s in-place
void reverse(char s[])
{
    int i, len;

    i = 0;
    for (len = length(s); i < len / 2; ++i)
    {
        printf(len);
        char temp;

        temp = s[i];
        s[i] = s[len - i];
        s[len - i] = temp;
    }
}

int length(char s[])
{
    int i;

    i = 0;
    while (s[i] != '0')
    {
        ++i;
    }
    return i;
}

// void copy(char to[], char from[])
// {
//     int i;

//     i = 0;
//     while ((to[i] = from[i]) != '\0')
//     {
//         ++i;
//     }
// ;}