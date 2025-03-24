/*
Dana jest tablica jedonwymiarowa 10-elementowa o wartościach typu rzeczywistego.
Napisz program obliczający sumę wartości elementów tablicy,  które są w wierszach parzystych.
Wartości tablicy zostały podane uprzednio przez użytkownika.
*/
#include <iostream>

using namespace std;

int main()
{
    const int n=10;
    double w[n];

    for(int i=0; i<=n-1; i++)
    {
        cout<<"w["<<i<<"]= ";
        cin>>w[i];
    }

/////////////////////////////////////////

    double suma;
    for(int x=0; x<=n-1; x++)
        if(x%2==0)
            suma+=w[x];
    cout<<"Suma: "<<suma<<endl;

/////////////////////////////////////////

    for(int i=0; i<=n-1; i++)
       cout<<"w["<<i<<"]= "<<w[i]<<", ";

    return 0;
}
