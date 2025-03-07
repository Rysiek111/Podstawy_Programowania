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
