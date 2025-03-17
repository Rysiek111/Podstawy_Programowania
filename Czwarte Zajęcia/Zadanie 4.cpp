#include <iostream>  // Biblioteka do obsługi wejścia i wyjścia (cin, cout)
#include <math.h>    // Biblioteka matematyczna (dla funkcji trygonometrycznych, np. sin())
using namespace std; // Używanie przestrzeni nazw std, aby nie pisać std::cout, std::sin itp.

int main() // Główna funkcja programu, zwracająca wartość całkowitą (int)
{
    // Pętla for iterująca przez wartości x od 0 do 3.140 z krokiem 0.0001
    for(double x = 0; x <= 3.140; x += 0.0001)
        // Wypisanie wartości x oraz sin(x) na standardowe wyjście
        cout << "x = " << x << "\t sin(x) = " << sin(x) << endl;

    return 0; // Zakończenie programu i zwrócenie 0, co oznacza poprawne wykonanie
}
