// Wypisać wszystkie liczby z zakresu od 1 do n, ale niepodzielne przez 3. Policzyć simę i iloczyn.

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
    if(i%3 != 0)
        {
            cout<<"i= "<<i<<endl;
            suma=suma+i;
            iloczyn=iloczyn*i;
        }

    cout<<"Suma= "<<suma<<endl;
    cout<<"Iloczyn= "<<iloczyn<<endl;

    return 0;
}
