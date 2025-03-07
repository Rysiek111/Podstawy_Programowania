#include <iostream>  // Dołączenie nagłówka, który pozwala na używanie funkcji do wejścia/wyjścia (cin, cout)

using namespace std;  // Używanie przestrzeni nazw 'std', aby nie trzeba było pisać 'std::' przed funkcjami (np. cout, cin)

int main() {
    // Deklaracja zmiennych x i y typu 'double' (liczby zmiennoprzecinkowe)
    double x, y;

    // Wyświetlenie powitania i krótkiego opisu działania programu
    cout << "Ten program obliczy pole i obwod prostokata" << endl;

    // Prośba o podanie długości jednego boku prostokąta
    cout << "Podaj dlugosc jednego boku: ";
    cin >> x;  // Odczytanie wartości wprowadzonej przez użytkownika i zapisanie jej do zmiennej x

    // Prośba o podanie długości drugiego boku prostokąta
    cout << "Podaj dlugosc drugiego boku: ";
    cin >> y;  // Odczytanie wartości wprowadzonej przez użytkownika i zapisanie jej do zmiennej y

    // Obliczenie pola prostokąta i wyświetlenie wyniku
    cout << "Pole wynosi: " << x * y << endl;

    // Obliczenie obwodu prostokąta i wyświetlenie wyniku
    cout << "Obwod wynosi: " << 2 * (x + y) << endl;

    return 0;  // Zakończenie programu, zwrócenie wartości 0, co oznacza prawidłowe zakończenie programu
}
