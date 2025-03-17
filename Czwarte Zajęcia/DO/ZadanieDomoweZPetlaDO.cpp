/*
Zmodyfikować napisany wcześniej dowolny program obliczeniowy (np. liczący pierwiastki, równania kwadratowe) tak,
żeby na życzenie użytkownika komputer ponawiał obliczenia lub kończył program.
Do tego celu zastosuj pętlę do while.
Program powinien uwzględnić przypadkowe naciścięcie klawisza Caps Lock.
*/

#include <iostream>

using namespace std;

int main()
{
    char dec;
    cout << "Ten program obliczy pole i obwod prostokata" << endl;

    do
    {
        double x, y;

        // Pobranie długości boków
        cout << "Podaj dlugosc pierwszego boku: ";
        cin >> x;
        cout << "Podaj dlugosc drugiego boku: ";
        cin >> y;

        // Obliczenia
        cout << "Pole wynosi: " << x * y << endl;
        cout << "Obwod wynosi: " << 2 * (x + y) << endl;

        // Zapytanie o ponowne wykonanie programu
        do
        {
            cout << "Czy chcesz powtorzyc? (T/N): ";
            cin >> dec;
        }
        while (dec != 'T' && dec != 't' && dec != 'N' && dec != 'n');

    }
    while (dec == 'T' || dec == 't');

    return 0;
}
