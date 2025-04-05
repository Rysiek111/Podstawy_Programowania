/*
Napisz funkcje max3a i max3b zwracajace maksimum z trzech parametrow rzeczywistych x,y i z:
-nie wykorzystkiac do tego innych funkcji
-wykorzystujac do tego celu wczesniej napisana funkcje max2.
*/
#include <iostream>
using namespace std;

// Funkcja pomocnicza - maksimum z dwóch liczb
double max2(double a, double b) {
    return (a > b) ? a : b;
}

// Wersja bez użycia innych funkcji
double max3a(double x, double y, double z) {
    double max = x;
    if (y > max) max = y;
    if (z > max) max = z;
    return max;
}

// Wersja z użyciem funkcji max2
double max3b(double x, double y, double z) {
    return max2(max2(x, y), z);
}

int main() {
    double x, y, z;

    cout << "Podaj trzy liczby rzeczywiste: ";
    cin >> x >> y >> z;

    cout << "max3a: " << max3a(x, y, z) << endl;
    cout << "max3b: " << max3b(x, y, z) << endl;

    return 0;
}
