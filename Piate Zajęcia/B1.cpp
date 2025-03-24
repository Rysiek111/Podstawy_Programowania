/*
Dana jest tablica jedonwymiarowa 10-elementowa o wartościach typu całkowitego.
Napisz program modyfikujący wprowadzone przez użytkownika wartości w tablicy tak,
żeby wartości parzyste zostały powiększone o 1,
a nie parzyste podniesione do kwadratu.
Wartości tablicy zostały podane uprzednio przez użytkownika.
*/
#include <iostream>

using namespace std;

int main()
{
    const int n=10;
    int w[n];

    for(int i=0; i<=n-1; i++)
    {
        cout<<"w["<<i<<"]= ";
        cin>>w[i];
    }

/////////////////////////////////////////


    for(int x=0; x<=n-1; x++)
        if(w[x]%2==0)
            w[x]++;
        else
            w[x]*=w[x];


/////////////////////////////////////////

    cout<<endl;
    for(int i=0; i<=n-1; i++){
       cout<<"w["<<i<<"]= "<<w[i]<<", ";
       cout<<endl;
       }

    return 0;
}
