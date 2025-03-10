/*
Oblicz następującą sumę n składników:
1+(1/2)+3+(1/4)+5+...
Wartość n zostaje podana uprzednio przez użytkownika.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Podaj ile razy mam się powtorzyc: ";
    cin>>n;

    double a=1,suma;
    cout<<"a1 = "<<a<<endl;

    for(int i=2; i<=n; i++)
    {
        if(i%2==0)
            a=1.0/i;
        else
            a=i;
        cout<<"a"<<i<<" = "<<a<<endl;
        suma+=a;
    }
    cout<<"Suma"<<suma<<endl;


    return 0;
}
