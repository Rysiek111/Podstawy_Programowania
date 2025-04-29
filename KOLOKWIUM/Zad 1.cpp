/*
1. Oblicz sumę wytażenia:
1+(1/4)+(1/9)+...+(1/(n^2))
Wartość n zostaje podana uprzednio przez użytkownika.
*/
#include <iostream>

using namespace std;

int n;
double suma;

int main()
{
    cout<<"Podaj liczbę n: ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        suma=suma+1/(i*i);
    }
    cout<<"Suma: "<<suma<<endl;
    return 0;
}
