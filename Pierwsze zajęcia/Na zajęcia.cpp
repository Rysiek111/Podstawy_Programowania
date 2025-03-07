#include <iostream>  // Dołączenie nagłówka, który pozwala na korzystanie z funkcji do wejścia/wyjścia (cin, cout)

using namespace std;  // Używanie przestrzeni nazw 'std', aby nie trzeba było pisać 'std::' przed funkcjami (np. cout, cin)

int main() {
    // Deklaracja zmiennej x typu 'int' (liczba całkowita)
    int x;

    // Prośba o podanie wartości zmiennej x
    cout << "Podaj wartosc x: ";
    cin >> x;  // Odczytanie wartości wprowadzonej przez użytkownika i zapisanie jej do zmiennej x

    // Sprawdzanie, czy wartość zmiennej x jest większa od 0
    if (x > 0)
        cout << "Podales wartosc dodatnia" << endl;  // Jeśli tak, wyświetl komunikat, że jest to wartość dodatnia

    else  // Jeśli x nie jest większe od 0, przechodzimy do kolejnego warunku
        if (x == 0)  // Sprawdzamy, czy x jest równe 0
            cout << "Podales wartosc zerowa" << endl;  // Jeśli tak, wyświetl komunikat, że jest to wartość zerowa
        else  // Jeśli x nie jest ani większe od 0, ani równe 0, to musi być mniejsze od 0
            cout << "Podales wartosc ujemna" << endl;  // Jeśli tak, wyświetl komunikat, że jest to wartość ujemna

    return 0;  // Zakończenie programu, zwrócenie wartości 0, co oznacza prawidłowe zakończenie programu
}
/*
Wyjaśnienia do kodu:

#include <iostream> – Ten nagłówek jest wymagany do korzystania z funkcji do wejścia (cin) i wyjścia (cout), które są wykorzystywane w programie.

cin >> x; – Służy do pobierania danych od użytkownika i zapisania ich do zmiennej x.

if (x > 0) – Jest to warunek, który sprawdza, czy wartość zmiennej x jest większa od 0. Jeśli warunek jest spełniony, wyświetlany jest komunikat o wartości dodatniej.

else if (x == 0) – Jeżeli poprzedni warunek nie został spełniony (czyli x nie jest większe od 0), sprawdzamy, czy x jest równe 0. Jeśli tak, wyświetlany jest komunikat o wartości zerowej.

else – Jeśli żaden z powyższych warunków nie został spełniony (czyli x jest mniejsze od 0), to wyświetlany jest komunikat o wartości ujemnej.

return 0; – Zakończenie programu, zwrócenie wartości 0 do systemu operacyjnego, co oznacza poprawne zakończenie programu.
*/