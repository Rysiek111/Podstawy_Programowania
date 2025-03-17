#include <iostream>
#include <math.h>
using namespace std;

main()
{
    double a;
    int b;

    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    double pot=1;
    for(int i=1; i<=b; i++)
        pot*=a;

    cout<<"Wartosc wynosi: "<<pot;
}
