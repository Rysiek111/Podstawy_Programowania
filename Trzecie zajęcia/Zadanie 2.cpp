/*
Wypisać liczbę z zakresu od 1 do n,
które są podzielne przez p lub przez q.
Obliczyćich sumę.
Wartość n,p oraz q podaje użytkownik.
*/

#include <iostream>

using namespace std;

int main()
{
    int n,p,q, suma;

    cout<<"Podaj ile razy mam się powtorzyc: ";
    cin>>n;
    cout<<"Podaj liczbę p: ";
    cin>>p;
    cout<<"Podaj liczbę q: ";
    cin>>q;

    suma=0;
    for(int i=1; i<=n; i++)
        if(i%p == 0 || i%q == 0)
        {
            cout<<"i= "<<i<<endl;
            suma=suma+i;
        }

    cout<<"Suma= "<<suma<<endl;

    return 0;
}
