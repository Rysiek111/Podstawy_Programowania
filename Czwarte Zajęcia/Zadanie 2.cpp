// Wypisz wszystkie pary liczb z zakresu od 1 do n, pomijając przypadki, gdy i == j.
// Wartość n podaje użytkownik.

#include <iostream> // Biblioteka do obsługi wejścia i wyjścia

using namespace std; // Używanie przestrzeni nazw std, aby uniknąć pisania std:: przed cout i cin

int main()
{
    int n;       // Deklaracja zmiennej n (liczba wprowadzona przez użytkownika)

    // Prośba o podanie liczby n od użytkownika
    cout << "Podaj ile razy mam się powtorzyc: ";
    cin >> n; // Wczytanie wartości n

    // Podwójna pętla generująca wszystkie możliwe pary (i, j) dla 1 ≤ i, j ≤ n
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i != j) // Warunek, aby nie wypisywać par, gdzie i == j
                cout << "i = " << i << ", j = " << j << endl; // Wypisanie pary liczb
        }

    return 0; // Zakończenie programu
}
