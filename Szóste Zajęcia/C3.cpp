/*
Dana jest tablica dwuwymiarowa 5x5 o wartosciach typu całkowitych.
Wartosci pierwszej tablicy podje uzytkownik.
W tablicy drugiej nalezy przyporzatkowac nastepujace wartosci:
 1 - jesli w pierwszej tablicy w tym samym wierszu i kolumnie bedzie wartosc dodatnia,
-1 - jesli w pierwszej tablicy w tym samym wierszu i kolumnie bedzie wartosc ujemna,
 0 - jezli w pierwszej tablicy bedzie wartosc zero.
*/
#include <iostream>

using namespace std;

int main()
{
    const int n=5,m=n;
    double w[n][m],signum[n][m];
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
        {
            if(w[i][j]>0)
                signum[i][j]=1;
            else
                if(w[i][j]<0)
                    signum[i][j]=-1;
                else
                    signum[i][j]=0;
        }

////////////////////////////////////////////////////////////

cout<<"Tabela podana:"<<endl;
    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<=m-1; j++)
            cout<<w[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
    cout<<"Signum:"<<endl;
    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<=m-1; j++)
            cout<<signum[i][j]<<"\t";
        cout<<endl;
    }

    return 0;
}
