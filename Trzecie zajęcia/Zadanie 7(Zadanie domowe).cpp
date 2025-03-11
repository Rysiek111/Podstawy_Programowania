/*
Oblicz następującą sumę n składników:
a1=1
a2=2
ai=a(i-1)+a(i-2)
Wartość n zostaje podana uprzednio przez użytkownika.
*/

#include <iostream>

using namespace std;

int main()
{
    int a1=1, a2=2, n;

    cout<<"Podaj ile razy mam sie powtorzyc: ";
    cin>>n;

    cout<<"a1 = "<<a1<<endl;

    if(n >= 2)
        cout<<"a2 = "<<a2<<endl;

    for(int i=3; i<=n; i++)
    {
        double a = a1 + a2;
        a1 = a2;
        a2 = a;
        cout<<"a"<<i<<" = "<<a<<endl;
    }

    return 0;
}