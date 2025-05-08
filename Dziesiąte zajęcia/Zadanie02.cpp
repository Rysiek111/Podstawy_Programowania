/*
Zmodyfikowene Zadanie01.cpp tak, żeby funkcje: suma_wektorowa, iloczy_wektorowy, wersor
oraz iloczyn_skalany nie były typu void, lecz zwracały typ wektor.
*/

#include <iostream>
#include <cmath>

using namespace std;

struct wektor
{
    double x, y, z;
};

void podaj_wektor(wektor &w)
{
    cout<<"Podaj x:";
    cin>>w.x;
    cout<<"Podaj y:";
    cin>>w.y;
    cout<<"Podaj z:";
    cin>>w.z;
}

void wypisz_wektor(wektor w)
{
    cout << "(" << w.x << ", " << w.y << ", " << w.z << ")" << endl;
}

double dlugosc_wektora(wektor w)
{
    return sqrt(w.x * w.x + w.y * w.y + w.z * w.z);
}

wektor suma_wektorow(wektor w1, wektor w2)
{
    wektor w3;
    w3.x = w1.x + w2.x;
    w3.y = w1.y + w2.y;
    w3.z = w1.z + w2.z;
    return w3;
}

double iloczyn_skalarny(wektor w1, wektor w2)
{
    return w1.x * w2.x + w1.y * w2.y + w1.z * w2.z;
}

wektor iloczyn_wektorowy(wektor w1, wektor w2)
{
    wektor w3;
    w3.x = w1.y * w2.z - w1.z * w2.y;
    w3.y = w1.z * w2.x - w1.x * w2.z;
    w3.z = w1.x * w2.y - w1.y * w2.x;
    return w3;
}

wektor wersor(wektor w)
{
    wektor tau;
    double dl = dlugosc_wektora(w);

    tau.x = w.x / dl;
    tau.y = w.y / dl;
    tau.z = w.z / dl;
    return tau;
}

wektor iloczyn_skalarny_wektor(double s, wektor w1)
{
    wektor w2;
    w2.x = s * w1.x;
    w2.y = s * w1.y;
    w2.z = s * w1.z;
    return w2;
}

/*int kierunek_zgodny(wektor w1, wektor w2)
{
    wektor w_cross;
    iloczyn_wektorowy(w1, w2, w_cross);
    return (w_cross.x == 0 && w_cross.y == 0 && w_cross.z == 0) ? 1 : 0;
}*/

int main()
{
    wektor w1, w2, w3, tau;
    double skalar;

    cout << "Wektor w1:\n";
    podaj_wektor(w1);
    cout << "Wektor w2:\n";
    podaj_wektor(w2);

    cout << "Wektor w1: ";
    wypisz_wektor(w1);
    cout << "Wektor w2: ";
    wypisz_wektor(w2);

    cout << "Dlugosc w1: " << dlugosc_wektora(w1) << endl;
    cout << "Dlugosc w2: " << dlugosc_wektora(w2) << endl;

    w3=suma_wektorow(w1, w2);
    cout << "Suma w1 + w2 = ";
    wypisz_wektor(w3);

    cout << "Iloczyn skalarny w1 i w2 = " << iloczyn_skalarny(w1, w2) << endl;

    w3=iloczyn_wektorowy(w1, w2);
    cout << "Iloczyn wektorowy w1 x w2 = ";
    wypisz_wektor(w3);

    tau=wersor(w1);
    cout << "Wersor wektora w1 = ";
    wypisz_wektor(tau);

    cout << "Podaj liczbe (skalar): ";
    cin >> skalar;
    w3=iloczyn_skalarny_wektor(skalar, w1);
    cout << "Skalar * w1 = ";
    wypisz_wektor(w3);

    //int zgodny = kierunek_zgodny(w1, w2);
    //cout << "Czy w1 i w2 maja zgodny kierunek? " << (zgodny ? "Tak" : "Nie") << endl;

    return 0;
}

