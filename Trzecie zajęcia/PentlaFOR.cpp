#include <iostream>  // Dołączenie nagłówka do obsługi wejścia/wyjścia (cin, cout)

using namespace std;  // Używanie przestrzeni nazw std, aby nie trzeba było pisać "std::" przed funkcjami

int main() {
    int n, suma;         // Deklaracja zmiennej 'n' do przechowywania liczby powtórzeń oraz 'suma' do przechowywania sumy liczb
    double iloczyn;      // Deklaracja zmiennej 'iloczyn' typu double, do przechowywania iloczynu liczb

    // Zapytanie użytkownika, ile razy pętla ma się powtórzyć
    cout << "Podaj ile razy mam sie powtorzyc: ";
    cin >> n;  // Wczytanie liczby powtórzeń do zmiennej n

    suma = 0;       // Inicjalizacja zmiennej suma wartością 0 (neutralny element dodawania)
    iloczyn = 1;    // Inicjalizacja zmiennej iloczyn wartością 1 (neutralny element mnożenia)

    // Pętla for, która wykonuje się od 1 do n (włącznie)
    for (int i = 1; i <= n; i++) {
        cout << "i=" << i << endl;  // Wyświetlenie bieżącej wartości iteracji
        suma = suma + i;            // Dodanie bieżącej wartości i do sumy
        iloczyn = iloczyn * i;       // Pomnożenie bieżącej wartości i przez iloczyn
    }

    // Po zakończeniu pętli wyświetlenie wyników
    cout << "Suma= " << suma << endl;
    cout << "Iloczyn= " << iloczyn << endl;

    return 0;  // Zwrócenie 0, co oznacza poprawne zakończenie programu
}
