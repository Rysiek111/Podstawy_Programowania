//Wypisz wszystkie pary liczb z zaktesu od 1 do n. Wartosc n podaje uzytkownik.

#include <iostream>

using namespace std;

int main()
{
    int n, suma;
    double iloczyn;

    cout<<"Podaj ile razy mam się powtorzyc: ";
    cin>>n;

    suma=0;
    iloczyn=1;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cout<<"i= "<<i<<", j="<<j<<endl;

    return 0;
}
