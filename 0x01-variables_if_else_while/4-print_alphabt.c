#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print alphabets lowercase and uppercase'
  *Return: always 0
  */
int main(void)
{
    int n = 97;
    int m = 65;
    
    while (n <= 122)
    {
        if (n == 101 || n == 113)
        {
            n++;
            continue;
        }
        putchar(n);
        n++;
    }
    putchar('\n');
    return (0);
}
