#include <iostream>

using namespace std;

void powieksz(int& x,int q)
{
    x+=q;
}

int main()
{
    int a=3,b=4;
    powieksz(a,b);
    cout<<"a="<<a<<"b="<<b;

    return 0;
}
