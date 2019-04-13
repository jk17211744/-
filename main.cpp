#include<iostream>
#include<cstring>
#include<map>
using namespace std;
#include"Complex.h"
#define fori(a) for(int i=0;i<a;i++)
#define forj(a) for(int j=0;j<a;j++)
#define ifor(a,b) for(int i=a;i<=b;i++)
#define jfor(a,b) for(int j=a;j<=b;j++)


int main()
{
    Complex a,b,c;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    c=a+b;
    cout<<c<<endl;
    c=a-b;
    cout<<c<<endl;
    c=a*b;
    cout<<c<<endl;
    c=a/b;
    cout<<c<<endl;
}
