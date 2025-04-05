#include <iostream>

using namespace std;

double potega(double a, int b)
{
    double pot=1;
    for(int i=1; i<=b; i++)
        pot*=a;
    return pot;
}
double potega2 (double a, int b)
{
    if (b==0)
        return 1;
    else
        return a*potega2(a,b-1);
}
int silnia(int a)
{
    int silnia=1;
    for(int i=2; i<=a; i++)
        silnia*=i;
    return silnia;
}
int silnia2(int n)
{
    if(n==1)
        return 1;
    else
        return n*silnia2(n-1);
}
int silnia3(double a, int b)
{
    if(b==0)
        return 1;
    else
        return a*silnia3(a,b-1);
}
int main()
{
    int n;
    cout<<"Podaj n:"<<endl;
    cin>>n;
    cout<<"silnia2="<<silnia2(n)<<endl;
    cout<<potega(3,3)<<endl;
    cout<<silnia3(5,2)<<endl;
    return 0;
}
