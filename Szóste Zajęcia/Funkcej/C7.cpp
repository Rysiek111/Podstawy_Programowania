/*
Napisac funkcję max2 zwracająca maksimum z dwuch paramertow.
*/
#include <iostream>
using namespace std;

double max2(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    double x, y;
    cout << "Podaj dwie liczby: ";
    cin >> x >> y;

    cout << "Maksimum to: " << max2(x, y) << endl;

    return 0;
}