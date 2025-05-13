/*
Zmodyfikować Zadanie02.cpp tak, żeby wszystkie funkcje były składowymi struktury wektor.
*/
#include <iostream>
#include <cmath>

using namespace std;

struct wektor
{
    double x, y, z;

    void podaj()
    {
        cout << "Podaj x: ";
        cin >> x;
        cout << "Podaj y: ";
        cin >> y;
        cout << "Podaj z: ";
        cin >> z;
    }

    void wypisz() const
    {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    double dlugosc() const
    {
        return sqrt(x * x + y * y + z * z);
    }

    wektor suma(const wektor& w) const
    {
        return {x + w.x, y + w.y, z + w.z};
    }

    double iloczyn_skalarny(const wektor& w) const
    {
        return x * w.x + y * w.y + z * w.z;
    }

    wektor iloczyn_wektorowy(const wektor& w) const
    {
        return {
            y * w.z - z * w.y,
            z * w.x - x * w.z,
            x * w.y - y * w.x
        };
    }

    wektor wersor() const
    {
        double dl = dlugosc();
        return {x / dl, y / dl, z / dl};
    }

    wektor pomnoz_przez_skalar(double s) const
    {
        return {s * x, s * y, s * z};
    }

    bool zgodny_kierunek(const wektor& w) const
    {
        wektor cross = iloczyn_wektorowy(w);
        return cross.x == 0 && cross.y == 0 && cross.z == 0;
    }
};

int main()
{
    wektor w1, w2, w3, tau;
    double skalar;

    cout << "Wektor w1:\n";
    w1.podaj();
    cout << "Wektor w2:\n";
    w2.podaj();

    cout << "Wektor w1: ";
    w1.wypisz();
    cout << "Wektor w2: ";
    w2.wypisz();

    cout << "Dlugosc w1: " << w1.dlugosc() << endl;
    cout << "Dlugosc w2: " << w2.dlugosc() << endl;

    w3 = w1.suma(w2);
    cout << "Suma w1 + w2 = ";
    w3.wypisz();

    cout << "Iloczyn skalarny w1 i w2 = " << w1.iloczyn_skalarny(w2) << endl;

    w3 = w1.iloczyn_wektorowy(w2);
    cout << "Iloczyn wektorowy w1 x w2 = ";
    w3.wypisz();

    tau = w1.wersor();
    cout << "Wersor wektora w1 = ";
    tau.wypisz();

    cout << "Podaj liczbe (skalar): ";
    cin >> skalar;
    w3 = w1.pomnoz_przez_skalar(skalar);
    cout << "Skalar * w1 = ";
    w3.wypisz();

    cout << "Czy w1 i w2 maja zgodny kierunek? " << (w1.zgodny_kierunek(w2) ? "Tak" : "Nie") << endl;

    return 0;
}
