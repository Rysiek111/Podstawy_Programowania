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
    int w[n][m];
    int i,j;

    for(i=0; i<=n-1; i++)
        for(j=0; j<=m-1; j++)
        {
            cout<<"w["<<i<<"]["<<j<<"]=";
            cin>>w[i][j];
        }
    cout<<endl;
////////////////////////////////////////////////////////////

    double ilosc;
    for(i=0; i<=n-1; i++)
        for(j=0; j<=m-1; j++)
        {
            if(w[i][j]%2==0)
                ilosc++;
        }
    cout<<"Ilosc parzystych elementow: "<<ilosc<<endl;
    cout<<endl;

////////////////////////////////////////////////////////////
    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<=m-1; j++)
            cout<<w[i][j]<<"\t";
        cout<<endl;
    }

    return 0;
}
