/*
Bazując na foliach z wykładów (folie 132–134) wykonać program zawierający zestaw funkcji obsługujących strukturę wektor. Program ten powinien zawierać następujące funkcje:

a) funkcję void podaj_wektor pozwalającą podać użytkownikowi współrzędne wektora w (parametr funkcji: w),

b) funkcję void wypisz_wektor wypisującą współrzędne wektora w w następującego schematu: (x, y, z) (parametr funkcji: w),

c) funkcję typu double o nazwie dlugosc_wektora, zwracającą długość wektora w (parametr funkcji: w),

d) funkcję void suma_wektorow obliczającą wynik działania w3 = w1 + w2 (parametry funkcji: w1, w2, w3),

e) funkcję typu double o nazwie iloczyn_skalarny, zwracającą wynik iloczynu skalarnego dwóch wektorów w1 i w2 (parametry funkcji: w1, w2),

f) funkcję void iloczyn_wektorowy obliczającą wynik działania w3 = w1 × w2 (parametry funkcji: w1, w2, w3),

g) funkcję void wersor obliczającą wersor tau na podstawie danego wektora w (parametry funkcji: w, tau),

h) funkcję void iloczyn_skalarny_wektor obliczającą wynik iloczynu skalar * wektor (parametry funkcji: s typu double, w1, wektor wynikowy w2),

i) funkcję typu int o nazwie kierunek_zgodny, zwracającą wartość 1 (prawda) lub 0 (fałsz), czy dwa podane wektory w1 i w2 mają zgodny kierunek (leżą na tej samej prostej) (parametry funkcji: w1, w2).
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

void suma_wektorow(wektor w1, wektor w2, wektor &w3)
{
    w3.x = w1.x + w2.x;
    w3.y = w1.y + w2.y;
    w3.z = w1.z + w2.z;
}

double iloczyn_skalarny(wektor w1, wektor w2)
{
    return w1.x * w2.x + w1.y * w2.y + w1.z * w2.z;
}

void iloczyn_wektorowy(wektor w1, wektor w2, wektor &w3)
{
    w3.x = w1.y * w2.z - w1.z * w2.y;
    w3.y = w1.z * w2.x - w1.x * w2.z;
    w3.z = w1.x * w2.y - w1.y * w2.x;
}

void wersor(wektor w, wektor &tau)
{
    double dl = dlugosc_wektora(w);

    tau.x = w.x / dl;
    tau.y = w.y / dl;
    tau.z = w.z / dl;
}

void iloczyn_skalarny_wektor(double s, wektor w1, wektor &w2)
{
    w2.x = s * w1.x;
    w2.y = s * w1.y;
    w2.z = s * w1.z;
}

int kierunek_zgodny(wektor w1, wektor w2)
{
    wektor w_cross;
    iloczyn_wektorowy(w1, w2, w_cross);
    return (w_cross.x == 0 && w_cross.y == 0 && w_cross.z == 0) ? 1 : 0;
}

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

    suma_wektorow(w1, w2, w3);
    cout << "Suma w1 + w2 = ";
    wypisz_wektor(w3);

    cout << "Iloczyn skalarny w1 i w2 = " << iloczyn_skalarny(w1, w2) << endl;

    iloczyn_wektorowy(w1, w2, w3);
    cout << "Iloczyn wektorowy w1 x w2 = ";
    wypisz_wektor(w3);

    wersor(w1, tau);
    cout << "Wersor wektora w1 = ";
    wypisz_wektor(tau);

    cout << "Podaj liczbe (skalar): ";
    cin >> skalar;
    iloczyn_skalarny_wektor(skalar, w1, w3);
    cout << "Skalar * w1 = ";
    wypisz_wektor(w3);

    int zgodny = kierunek_zgodny(w1, w2);
    cout << "Czy w1 i w2 maja zgodny kierunek? " << (zgodny ? "Tak" : "Nie") << endl;

    return 0;
}
