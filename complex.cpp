#include "complex.h"

void Complex::input(string s)
{
    int v1 = 0;
    int i = 0;
    while (s[i] != '+')
    {
        v1 = v1 * 10 + s[i] - '0';
        i++;
    }
    while (s[i] == ' ' || s[i] == '+' || s[i] == 'i')
    {
        i++;
    }
    int v2 = 0;
    while (i < s.length())
    {
        v2 = v2 * 10 + s[i] - '0';
        i++;
    }
    a = v1;
    b = v2;
}
