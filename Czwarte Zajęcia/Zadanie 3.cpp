#include <iostream>  // Biblioteka do obsługi wejścia i wyjścia

using namespace std;

int main()
{
    int n;       // Deklaracja zmiennej n (liczba iteracji)


    // Pobranie liczby powtórzeń od użytkownika
    cout << "Podaj ile razy mam się powtorzyc: ";
    cin >> n;

    // Pętla for, w której:
    // - i zaczyna się od 1 i rośnie o 1 w każdej iteracji
    // - j zaczyna się od n i zmniejsza się o 2 w każdej iteracji
    for (int i = 1, j = n; i <= j; i++, j -= 2) {
        cout << "i= " << i << ", j=" << j << endl; // Wypisanie wartości zmiennych i i j
    }

    return 0; // Zakończenie programu, zwrócenie 0 oznacza poprawne wykonanie
}
