#include<iostream>
#include"Complex.h"
using namespace std;
istream&operator>>(istream&in,Complex&a)
{
    cout<<"real"<<":";
    in>>a.real;
    cout<<"imag"<<":";
    in>>a.imag;
    return in;
}

ostream&operator<<(ostream&out,Complex&a)
{
    out<<a.real<<"+"<<a.imag<<"i";
    return out;
}
Complex Complex:: operator+(Complex&a)
{
    Complex c;
    c.real=a.real+real;
    c.imag=a.imag+imag;
    return c;
}
Complex Complex:: operator-(Complex&a)
{
    Complex c;
    c.real=a.real-real;
    c.imag=a.imag-imag;
    return c;
}
Complex Complex:: operator*(Complex&a)//(ac£­bd)+(bc+ad)i
{
    Complex c;
    c.real=(a.real*real)-(a.imag*imag);
    c.imag=(a.imag*real)+(a.real*imag);
    return c;
}
Complex Complex:: operator/(Complex&x)//(a*c+b*d)/(c*c+d*d) +((b*c-a*d)/(c*c+d*d))
{
    int a=x.real,b=x.imag,c=real,d=imag;
    Complex y;
    y.real=(a*c+b*d)/(c*c+d*d);
    y.imag=((b*c-a*d)/(c*c+d*d));
    return y;
}
