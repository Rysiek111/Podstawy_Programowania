#include <iostream>  // Dołączenie nagłówka, który pozwala na korzystanie z funkcji do wejścia/wyjścia (cin, cout)

using namespace std;  // Używanie przestrzeni nazw 'std', aby nie trzeba było pisać 'std::' przed funkcjami (np. cout, cin)

int main() {
    int x, y;  // Deklaracja zmiennych x i y typu 'int' (liczba całkowita)
    x = y = 5;  // Przypisanie wartości 5 do zmiennych x i y. (y = 5) i (x = y)

    // Wyświetlanie początkowej wartości zmiennej x
    cout << "x=" << x << endl;  

    // Tradycyjny zapis inkrementacji (zwiększenie x o 1)
    x = x + 1;  // To samo, co x += 1, tylko zapisane w bardziej rozbudowany sposób
    cout << "x=" << x << endl;

    // Użycie łączonego operatora przypisania (zwiększenie x o 1)
    x += 1;  // Zwiększa wartość x o 1. Jest to krótszy zapis niż x = x + 1
    cout << "x=" << x << endl;

    // Operator preinkrementacji (++x): zwiększa wartość x przed jej użyciem
    ++x;  // Zwiększa x o 1, a następnie zwraca zmienną x
    cout << "x=" << x << endl;

    // Operator postinkrementacji (x++): zwiększa wartość x po jej użyciu
    x++;  // Zwiększa x o 1, ale zwraca pierwotną wartość zmiennej przed inkrementacją
    cout << "x=" << x << endl;

    cout << endl;  // Pusty wiersz dla oddzielenia wyjścia od reszty programu

    // Wyświetlanie wartości zmiennej y
    cout << "y=" << y << endl;  // y nie zostało zmodyfikowane, więc pozostaje równe 5

    return 0;  // Zakończenie programu, zwrócenie wartości 0, co oznacza prawidłowe zakończenie programu
}
/*
Wyjaśnienie operacji:

x = x + 1; – To jest tradycyjny sposób inkrementacji zmiennej x, czyli zwiększenia jej wartości o 1.

x += 1; – To skrócony zapis dla x = x + 1;. Operator += jest operator łączony, który wykonuje operację przypisania i dodawania w jednym kroku.

++x; (preinkrementacja) – Operator preinkrementacji zwiększa wartość zmiennej x o 1 przed jej użyciem. Wartość x jest zwiększana, a wynik operacji to już ta zwiększona wartość.

x++; (postinkrementacja) – Operator postinkrementacji zwiększa wartość zmiennej x o 1, ale zwraca pierwotną wartość przed jej zwiększeniem. To oznacza, że najpierw zostaje użyta wartość zmiennej, a potem jest ona inkrementowana.

cout << "y=" << y << endl; – Na końcu programu, wartość zmiennej y (która nie została zmieniona, więc wynosi nadal 5) jest wyświetlana.
*/