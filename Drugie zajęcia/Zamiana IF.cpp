#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x;
    cout<<"Podaj x: ";
    cin>>x;

    cout<<"Wartosc bezwzgledna z x wynosi: ";

    cout<<(x>=0?x:-x)<<endl;

/*
    if(x>0)
    cout<<x<<endl;

    else
    cout<<-x<<endl;
*/

    return 0;
}
