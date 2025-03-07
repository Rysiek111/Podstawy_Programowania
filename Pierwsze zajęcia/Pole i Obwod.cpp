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
/*
Wyjaśnienia do niektórych fragmentów kodu:

#include <iostream> – Ten nagłówek jest potrzebny, aby korzystać z funkcji do wyświetlania danych (cout) oraz wprowadzania danych (cin).

using namespace std; – To pozwala na korzystanie z funkcji i obiektów z przestrzeni nazw std bez konieczności pisania przed nimi std::.

cin >> x; i cin >> y; – Służą do wprowadzenia danych przez użytkownika, które są następnie zapisywane w zmiennych x i y.

cout << ... – Używane do wyświetlania wyników na ekranie.

return 0; – Kończy program i zwraca wartość 0 do systemu operacyjnego, co oznacza, że program zakończył się poprawnie.
*/