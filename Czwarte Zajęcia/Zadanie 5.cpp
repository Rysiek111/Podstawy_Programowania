#include <iostream>  // Biblioteka do obsługi wejścia i wyjścia
#include <math.h>    // Biblioteka matematyczna
using namespace std; // Używanie przestrzeni nazw std, aby uniknąć pisania std:: przed cout/cin

int main()  // Poprawiony nagłówek funkcji main() (brakowało 'int')
{
    double a; // Podstawa potęgi
    int b;    // Wykładnik potęgi

    cout << "Podaj a: "; // Prośba o podanie wartości a
    cin >> a;            // Wczytanie wartości a od użytkownika
    cout << "Podaj b: "; // Prośba o podanie wartości b
    cin >> b;            // Wczytanie wartości b od użytkownika

    double pot = 1; // Zmienna przechowująca wynik potęgowania, początkowa wartość 1
    for(int i = 1; i <= b; i++) // Pętla wykonująca mnożenie a przez siebie b razy
        pot *= a;               // Mnożenie aktualnej wartości przez a

    cout << "Wartosc wynosi: " << pot; // Wyświetlenie wyniku potęgowania

    return 0; // Zakończenie programu, zwrócenie 0 oznacza poprawne wykonanie
}
