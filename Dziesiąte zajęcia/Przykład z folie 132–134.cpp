#include <iostream>
#include <math.h>

using namespace std;

struct twektor
{
    double x,y,z;
};

void podaj_wektor(twektor& w)
{
    cout<<"Podaj x:";
    cin>>w.x;
    cout<<"Podaj y:";
    cin>>w.y;
    cout<<"Podaj z:";
    cin>>w.z;
}

void wypisz_wektor(twektor w)
{
    cout<<"("<<w.x<<","<<w.y<<","<<w.z<<")"<<endl;
}

double dlugosc_wektora(twektor w)
{
    return sqrt(w.x*w.x+w.y*w.y+w.z*w.z);
}

void suma_wektorow(twektor w1,twektor w2,twektor& w3)
{
    w3.x=w1.x+w2.x;
    w3.y=w1.y+w2.y;
    w3.z=w1.z+w2.z;
}

double iloczyn_skalarny(twektor w1,twektor w2)
{
    return w1.x*w2.x+w1.y*w2.y+w1.z*w2.z;
}

void iloczyn_wektorowy(twektor w1,twektor w2,twektor& w3)
{
    w3.x=w1.y*w2.z-w1.z*w2.y;
    w3.y=w1.z*w2.x-w1.x*w2.z;
    w3.z=w1.x*w2.y-w1.y*w2.x;
}


int main()
{
    twektor w1,w2,w3;
    cout<<"Podaj wspolrzedne w1:"<<endl;
    podaj_wektor(w1);
    cout<<"Dlugosc wektora w1:"<<dlugosc_wektora(w1)<<endl;
    cout<<"Podaj wspolrzedne w2:"<<endl;
    podaj_wektor(w2);
    cout<<"Dlugosc wektora w2:"<<dlugosc_wektora(w2)<<endl;
    suma_wektorow(w1,w2,w3);
    cout<<"Suma wektorow:";
    wypisz_wektor(w3);
    cout<<"Iloczyn skalarny:"<<iloczyn_skalarny(w1,w2)<<endl;
    iloczyn_wektorowy(w1,w2,w3);
    cout<<"Iloczyn wektorowy:";
    wypisz_wektor(w3);
}
