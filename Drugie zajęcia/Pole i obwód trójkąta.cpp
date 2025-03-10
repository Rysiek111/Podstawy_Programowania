/*
Napisać program obliczający obwód i pole trójkąta na podstawie danych długości boków a, b i c,
ale tylko w przypadku, kiedy wszystkie boki są dodatnie oraz suma długości dwóch dowolnych boków jest większa od trzeciego.
Do obliczania pola trójkąta wykorzystać wzór Herona.
*/

#include <iostream>  // Dołączenie nagłówka do obsługi wejścia/wyjścia (cin, cout)
#include <math.h>    // Dołączenie nagłówka do korzystania z funkcji matematycznych (np. sqrt)

using namespace std;  // Używanie przestrzeni nazw 'std', aby nie trzeba było pisać 'std::' przed funkcjami (np. cout, cin)

int main() {
    double a, b, c, p;  // Deklaracja zmiennych a, b, c jako typu 'double' (liczby zmiennoprzecinkowe), p będzie użyteczne do obliczenia półobwodu

    // Prośba o podanie długości boków trójkąta
    cout << "Podaj bok a="; cin >> a;
    cout << "Podaj bok b="; cin >> b;
    cout << "Podaj bok c="; cin >> c;

    // Sprawdzanie, czy boki są dodatnie i czy spełniają nierówności trójkąta (suma długości dwóch boków musi być większa od trzeciego)
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        // Obliczanie obwodu trójkąta
        cout << "Obwod=" << a + b + c << endl;

        // Obliczanie półobwodu
        p = (a + b + c) / 2;

        // Obliczanie pola trójkąta z wykorzystaniem wzoru Herona
        cout << "Pole=" << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
    } else {
        // Jeśli warunki nie są spełnione, wyświetlamy komunikat o błędzie
        cout << "Boki nie tworza prawidlowego trojkata!" << endl;
    }

    return 0;  // Zakończenie programu, zwrócenie wartości 0, co oznacza prawidłowe zakończenie
}
