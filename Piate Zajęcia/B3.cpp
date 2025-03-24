/*
Dana są 2 tablice w1 i w2 jednowymiarowe 10-elementowe o wartościach typu rzeczywistego.
Wartości pierwszej tablicy zostają podane przez użytkownika.
Wartości drugiej tablicy mają zostać przepisane z tablicy pierwszej w odwrotnej kolejności.
*/
#include <iostream>

using namespace std;

int main()
{
    const int n=10;
    double w[n],m[n];

    for(int i=0; i<=n-1; i++)
    {
        cout<<"w["<<i<<"]= ";
        cin>>w[i];
    }

/////////////////////////////////////////

    for(int x=0; x<=n-1; x++)
        m[x] = w[n-(x+1)];

/////////////////////////////////////////

    cout<<endl;
    for(int i=0; i<=n-1; i++)
        cout<<"m["<<i<<"]= "<<m[i]<<", "<<endl;

    return 0;
}
