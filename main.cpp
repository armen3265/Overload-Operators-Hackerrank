//Operator Overloading
#include "complex.h"
Complex& operator+(Complex c1, const Complex& c2)
{
    c1.a += c2.a;
    c1.b += c2.b;
    return c1;
}
ostream& operator<<(ostream& os, const Complex& x)
{
    os << x.a << "+i" << x.b;
    return os;
}

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

int main()
{
    Complex x, y;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    x.input(s1);
    y.input(s2);
    Complex z = x + y;
    cout << z << endl;
}
