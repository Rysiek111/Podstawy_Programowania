/*
Dana jest tablica 5x5 o wartościach typu rzeczywistego.
W pierwszej kolejności dane do tablicy podaje użytkownik.
Napisz frafment programu obliczający ślad macierzy.
*/
#include <iostream>

using namespace std;

int main()
{
    const int n=5,m=n;
    double a[n][m];
    int i,j;

    for(i=0; i<=n-1; i++)
        for(j=0; j<=m-1; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    cout<<endl;
////////////////////////////////////////////////////////////

    double slad=0;

    for(i=0; i<=n-1; i++)
    {
        slad+=a[i][i];
        cout<<endl;
    }
    cout<<"Slad = "<<slad<<endl;
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
