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
    {
        cout<<"i="<<i<<endl;
        suma=suma+i;
        iloczyn=iloczyn*i;
    }

    cout<<"Suma= "<<suma<<endl;
    cout<<"Iloczyn= "<<iloczyn<<endl;

    return 0;
}
