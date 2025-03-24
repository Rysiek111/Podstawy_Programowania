/*
Dana jest tablica jedonwymiarowa 10-elementowa o wartościach typu rzeczywistego.
Napisz program automatycznie generujący wartości w tablicy tak,
zeby w wierszach parzystych zostały przypisane wartości równe pierwiastkowi numeru wiersza,
a nieparzyste wartości równe 1.
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const int n=10;
    double w[n];

    for(int i=0; i<=n-1; i++)
        if(i%2==0)
            w[i]=sqrt(i);
        else
            w[i]=1;

/////////////////////////////////////////



/////////////////////////////////////////

    for(int i=0; i<=n-1; i++)
        cout<<"w["<<i<<"]= "<<w[i]<<", "<<endl;

    return 0;
}
