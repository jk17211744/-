
using namespace std;
class Complex
{
 	friend istream& operator>>(istream&,Complex&);
        friend ostream& operator<<(ostream&,Complex&);
    public :
        Complex operator+(Complex&);
        Complex operator-(Complex&);
        Complex operator*(Complex&);
        Complex operator/(Complex&);
    private :
       int real;
       int imag;
};
