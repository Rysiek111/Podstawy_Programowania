/*
Dana jest tablica dwuwymiarowa 10x10 o wartosciach typu całkowitych.
Napisac program automatycznie wpisujacy wartosci 0 i 1 do tablicy,
w postaci zblizone do szachownicy
*/
#include <iostream>

using namespace std;

int main()
{
    const int n=10,m=n;
    double w[n][m];
    int i,j;

    for(i=0; i<=n-1; i++)
        for(j=0; j<=m-1; j++)
            if((i+j)%2==0)
                w[i][j]=0;
            else
                w[i][j]=1;

////////////////////////////////////////////////////////////

    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<=m-1; j++)
            cout<<w[i][j]<<"\t";
        cout<<endl;
    }

    return 0;
}
