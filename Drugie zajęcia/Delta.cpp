#include <iostream>  // Dołączenie nagłówka do obsługi wejścia/wyjścia (cin, cout)
#include <math.h>     // Dołączenie nagłówka do funkcji matematycznych (np. sqrt)

using namespace std;  // Używanie przestrzeni nazw 'std', aby nie trzeba było pisać 'std::' przed funkcjami (np. cout, cin)

int main() {
    double a, b, c, delta, x1, x2;  // Deklaracja zmiennych: a, b, c - współczynniki funkcji kwadratowej, delta - wyróżnik, x1 i x2 - pierwiastki równania

    // Wczytanie współczynników funkcji kwadratowej (a, b, c)
    cout << "Podaj wartosc a: ";
    cin >> a;

    cout << "Podaj wartosc b: ";
    cin >> b;

    cout << "Podaj wartosc c: ";
    cin >> c;

    // Obliczenie delty
    delta = (b * b) - (4 * a * c);
    cout << "Delta= " << delta << endl;  // Wyświetlenie wartości delty

    // Sprawdzenie warunków na podstawie wartości delty
    if (delta > 0) {  // Jeżeli delta jest większa od 0, są dwa pierwiastki rzeczywiste
        cout << "Pierwiastek z delty= " << sqrt(delta) << endl;  // Wyświetlenie pierwiastka z delty
        cout << "Są dwa rozwazania" << endl;  // Informacja o dwóch rozwiązaniach
        // Obliczenie pierwiastków równania kwadratowego
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "X1= " << x1 << endl;  // Wyświetlenie pierwszego pierwiastka
        cout << "X2= " << x2 << endl;  // Wyświetlenie drugiego pierwiastka
    } 
    else if (delta == 0) {  // Jeżeli delta jest równa 0, jest jedno rozwiązanie
        cout << "Pierwiastek z delty= " << sqrt(delta) << endl;  // Pierwiastek z delty, w tym przypadku 0
        cout << "Jest jedno rozwiazanie" << endl;  // Informacja o jednym rozwiązaniu
        x1 = (-b) / (2 * a);  // Obliczenie pierwiastka, w tym przypadku tylko jeden pierwiastek
        cout << x1 << endl;  // Wyświetlenie pierwiastka
    } 
    else {  // Jeżeli delta jest mniejsza od 0, brak rozwiązań
        cout << "Brak rozwiazan" << endl;  // Informacja o braku rozwiązań
    }

    return 0;  // Zakończenie programu
}
