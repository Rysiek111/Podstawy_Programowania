/*
Dana jest tablica dwuwymiarowa 4x4 o wartosciach typu rzeczywistego.
Napisac program zarujacy wartosci ujemne w tablicy.
Wartosci tablicy zostaly podane uprzedniu przez uzytkownika.
*/
#include <iostream>

using namespace std;

int main()
{
    const int n=2,m=n;
    double w[n][m];
    int i,j;

    for(i=0; i<=n-1; i++)
        for(j=0; j<=m-1; j++)
        {
            cout<<"w["<<i<<"]["<<j<<"]=";
            cin>>w[i][j];
        }
    cout<<endl;
////////////////////////////////////////////////////////////

    for(i=0; i<=n-1; i++)
        for(j=0; j<=m-1; j++)
            if(w[i][j]<0)
                w[i][j]=0;

////////////////////////////////////////////////////////////
    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<=m-1; j++)
            cout<<w[i][j]<<"\t";
        cout<<endl;
    }

    return 0;
}
