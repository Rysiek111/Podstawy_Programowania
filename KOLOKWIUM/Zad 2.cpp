/*
2. Dana jest tablica dwuwymiarowa 4x4 o wartościach typu rzeczywistego.
W pierwszej kolejności użytkownik ma wprowadzić wartości do tablicy.
Napisać program zliczający liczbę elementów z zakresu od 5 do 15.
*/
#include <iostream>

using namespace std;

int main()
{
    const int n=4,m=n;
    double w[n][m];
    int i,j;

    for(i=0; i<=n-1; i++)
        for(j=0; j<=m-1; j++)
        {
            cout<<"w["<<i<<"]["<<j<<"]=";
            cin>>w[i][j];
        }
    cout<<endl;
    ///////////////////////////////////////////////
    int ilosc=0;
    for(i=0; i<=n-1; i++)
        for(j=0; j<=m-1; j++)
            if(w[i][j]<=15 && w[i][j]>=5)
                ilosc++;
    ///////////////////////////////////////////////
    for (int i=0; i<=n-1; i++)
    {
        for(int j=0; j<=m-1; j++)
            cout<<w[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
    cout<<"Ilosc elementow: "<<ilosc<<endl;

    return 0;
}
