#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, delta, x1, x2;
    cout<<"Podaj wartosc a: ";
    cin>>a;

    cout<<"Podaj wartosc b: ";
    cin>>b;

    cout<<"Podaj wartosc c: ";
    cin>>c;

    delta=(b*b)-(4*a*c);
    cout<<"Delta= "<<delta<<endl;

    if(delta>0){
        cout<<"Pierwiastek z delty= "<<sqrt(delta)<<endl;
        cout<<"Są dwa rozwazania"<<endl;
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        cout<<"X1= "<<x1<<endl;
        cout<<"X2= "<<x2<<endl;
        }
    else
        if(delta==0){
            cout<<"Pierwiastek z delty= "<<sqrt(delta)<<endl;
            cout<<"Jest jedno rozwiazanie"<<endl;
            x1=(-b)/2*a;
            cout<<x1<<endl;
            }
        else
            cout<<"Brak rozwiazan"<<endl;

    return 0;
}
