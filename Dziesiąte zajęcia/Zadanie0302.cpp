/*
Wersja o którą chodziło prowadzącemu
*/
#include <iostream>
#include <cmath>

using namespace std;

struct wektor
{
    double x, y, z;
    void podaj_wektor();
    void wypisz_wektor();
    double dlugosc_wektora();
    wektor suma_wektorow(wektor w2);
    double iloczyn_skalarny(wektor w2);
    wektor iloczyn_wektorowy(wektor w2);
    wektor wersor();
    wektor iloczyn_skalarny_wektor(double s);
    int kierunek_zgodny(wektor w2);
};

void wektor::podaj_wektor()
{
    cout<<"Podaj x:"; cin>>this->x;
    cout<<"Podaj y:"; cin>>this->y;
    cout<<"Podaj z:"; cin>>this->z;
}

void wektor::wypisz_wektor()
{
    cout << "(" << this->x << ", " << this->y << ", " << this->z << ")" << endl;
}

double wektor::dlugosc_wektora()
{
    return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}

wektor wektor::suma_wektorow(wektor w2)
{
    wektor w3;
    w3.x = this->x + w2.x;
    w3.y = this->y + w2.y;
    w3.z = this->z + w2.z;
}

double wektor::iloczyn_skalarny(wektor w2)
{
    return this->x * w2.x + this->y * w2.y + this->z * w2.z;
}

wektor wektor::iloczyn_wektorowy(wektor w2)
{
    wektor w3;
    w3.x = this->y * w2.z - this->z * w2.y;
    w3.y = this->z * w2.x - this->x * w2.z;
    w3.z = this->x * w2.y - this->y * w2.x;
}

wektor wektor::wersor()
{
    wektor tau;
    double dl =this->dlugosc_wektora();

    tau.x = this->x / dl;
    tau.y = this->y / dl;
    tau.z = this->z / dl;
}

wektor wektor::iloczyn_skalarny_wektor(double s)
{
    wektor w3;
    w3.x = s * this->x;
    w3.y = s * this->y;
    w3.z = s * this->z;
    return w3;
}

int wektor::kierunek_zgodny(wektor w2)
{
    wektor w3=this->iloczyn_wektorowy(w2);
    {
    if(w3.dlugosc_wektora()<1E-5)
        return 1;
    else
        return 0;
    }
}

int main()
{
    wektor w1, w2, w3, tau;
    double skalar;

    cout << "Wektor w1:\n";
    w1.podaj_wektor();
    cout << "Wektor w2:\n";
    w2.podaj_wektor();

    cout << "Wektor w1: ";
    w1.wypisz_wektor();
    cout << "Wektor w2: ";
    w2.wypisz_wektor();

    cout << "Dlugosc w1: " << w1.dlugosc_wektora() << endl;
    cout << "Dlugosc w2: " << w2.dlugosc_wektora() << endl;

    w3=w1.suma_wektorow(w2);
    cout << "Suma w1 + w2 = ";
    w3.wypisz_wektor();

    cout << "Iloczyn skalarny w1 i w2 = " << w1.iloczyn_skalarny(w2) << endl;

    w3=w1.iloczyn_wektorowy(w2);
    cout << "Iloczyn wektorowy w1 x w2 = ";
    w3.wypisz_wektor();

    tau=w1.wersor();
    cout << "Wersor wektora w1 = ";
    tau.wypisz_wektor();

    cout << "Podaj liczbe (skalar): ";
    cin >> skalar;
    w3=w1.iloczyn_skalarny_wektor(skalar);
    cout << "Skalar * w1 = ";
    w3.wypisz_wektor();

    int zgodny = w1.kierunek_zgodny(w2);
    cout << "Czy w1 i w2 maja zgodny kierunek? " << (zgodny ? "Tak" : "Nie") << endl;

    return 0;
}
