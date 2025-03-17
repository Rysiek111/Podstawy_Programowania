// Wypisz wszystkie pary liczb z zakresu od 1 do n. Wartosc n podaje użytkownik.

#include <iostream> // Biblioteka do obsługi wejścia i wyjścia

using namespace std; // Używanie przestrzeni nazw std, aby uniknąć pisania std:: przed cout i cin

int main()
{
    int n; // Zmienna do przechowywania liczby n, podanej przez użytkownika

    // Prośba o podanie liczby n (zakresu)
    cout << "Podaj ile razy mam się powtorzyc: "; 
    cin >> n; // Wczytanie wartości n od użytkownika

    // Podwójna pętla for generująca wszystkie możliwe pary (i, j) dla 1 ≤ i, j ≤ n
    for (int i = 1; i <= n; i++) // Pętla zewnętrzna dla wartości i
        for (int j = 1; j <= n; j++) // Pętla wewnętrzna dla wartości j
            // Wypisanie pary liczb i i j
            cout << "i = " << i << ", j = " << j << endl;

    return 0; // Zakończenie programu
}
