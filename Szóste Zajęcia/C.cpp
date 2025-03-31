/*
Dana jest tablica dwuwymiarowa 4x4 o wartościach typu calkowitego.
Napisac program zliczajacy liczbe elmentow parzystych w tablicy.
Wartosci tablicy zostaly podane uprzedniu przez uzytkownika.
*/
#include <iostream>

using namespace std;

int main()
{
    const int n=2,m=n;
    int a[n][m];
    int i,j;

    for(i=0; i<=n-1; i++)
        for(j=0; j<=m-1; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    cout<<endl;
////////////////////////////////////////////////////////////

    double ilosc;
    for(i=0; i<=n-1; i++)
        for(j=0; j<=m-1; j++)
        {
            if(a[i][j]%2==0)
                ilosc++;
        }
    cout<<"Ilosc: "<<ilosc<<endl;
    cout<<endl;

////////////////////////////////////////////////////////////
    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<=m-1; j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }

    return 0;
}

