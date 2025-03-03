/*
Napisać program obliczający obwód i pole trujkąta na podstawie danych długości boków a,b i c,
ale tylko w przypadku, kiedy wszystkie boki są dodatnie
oraz suma dłigości dwóch dowolnych boków jest większa od trzeciego.
Do obliczania pola trójkąta wykorzystać wzór Herona.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a,b,c,p;

    cout<<"Podaj bok a="; cin>>a;
    cout<<"Podaj bok b="; cin>>b;
    cout<<"Podaj bok c="; cin>>c;

    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
    {
    cout<<"Obwod="<<a+b+c<<endl;
    p=(a+b+c)/2;
    cout<<"Pole="<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
    }
    return 0;
}

