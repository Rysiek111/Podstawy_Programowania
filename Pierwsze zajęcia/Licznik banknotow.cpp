#include <iostream>  // Dołączenie nagłówka, który pozwala na korzystanie z funkcji do wejścia/wyjścia (cin, cout)

using namespace std;  // Używanie przestrzeni nazw 'std', aby nie trzeba było pisać 'std::' przed funkcjami (np. cout, cin)

int main() {
    int x;  // Deklaracja zmiennej x typu 'int' (liczba całkowita), która będzie przechowywać kwotę w groszach

    // Prośba o podanie kwoty w groszach (całkowita liczba groszy)
    cout << "Podaj kwote w groszach: ";
    cin >> x;  // Odczytanie wartości wprowadzonej przez użytkownika i zapisanie jej do zmiennej x

    // Obliczanie ilości banknotów i monet z różnych nominałów i wyświetlanie wyników

    // Liczymy ile pełnych 500 złotych zmieści się w podanej kwocie (50000 groszy = 500 zł)
    cout << "500zl: " << x / 50000 << endl;
    x = x % 50000;  // Pozostaje nam reszta po wydaniu banknotów 500 zł (modulo)

    // Liczymy ile pełnych 200 złotych zmieści się w reszcie
    cout << "200zl: " << x / 20000 << endl;
    x = x % 20000;  // Reszta po wydaniu banknotów 200 zł

    // Liczymy ile pełnych 100 złotych zmieści się w reszcie
    cout << "100zl: " << x / 10000 << endl;
    x = x % 10000;  // Reszta po wydaniu banknotów 100 zł

    // Liczymy ile pełnych 50 złotych zmieści się w reszcie
    cout << "50zl: " << x / 5000 << endl;
    x = x % 5000;  // Reszta po wydaniu banknotów 50 zł

    // Liczymy ile pełnych 20 złotych zmieści się w reszcie
    cout << "20zl: " << x / 2000 << endl;
    x = x % 2000;  // Reszta po wydaniu banknotów 20 zł

    // Liczymy ile pełnych 10 złotych zmieści się w reszcie
    cout << "10zl: " << x / 1000 << endl;
    x = x % 1000;  // Reszta po wydaniu banknotów 10 zł

    // Liczymy ile pełnych 5 złotych zmieści się w reszcie
    cout << "5zl: " << x / 500 << endl;
    x = x % 500;  // Reszta po wydaniu monet 5 zł

    // Liczymy ile pełnych 2 złote zmieści się w reszcie
    cout << "2zl: " << x / 200 << endl;
    x = x % 200;  // Reszta po wydaniu monet 2 zł

    // Liczymy ile pełnych 1 złotych zmieści się w reszcie
    cout << "1zl: " << x / 100 << endl;
    x = x % 100;  // Reszta po wydaniu monet 1 zł

    // Liczymy ile pełnych 50 groszy zmieści się w reszcie
    cout << "50gr: " << x / 50 << endl;
    x = x % 50;  // Reszta po wydaniu monet 50 gr

    // Liczymy ile pełnych 20 groszy zmieści się w reszcie
    cout << "20gr: " << x / 20 << endl;
    x = x % 20;  // Reszta po wydaniu monet 20 gr

    // Liczymy ile pełnych 10 groszy zmieści się w reszcie
    cout << "10gr: " << x / 10 << endl;
    x = x % 10;  // Reszta po wydaniu monet 10 gr

    // Liczymy ile pełnych 5 groszy zmieści się w reszcie
    cout << "5gr: " << x / 5 << endl;
    x = x % 5;  // Reszta po wydaniu monet 5 gr

    // Liczymy ile pełnych 2 groszy zmieści się w reszcie
    cout << "2gr: " << x / 2 << endl;
    x = x % 2;  // Reszta po wydaniu monet 2 gr

    // Pozostała liczba to 1 grosz
    cout << "1gr: " << x << endl;

    return 0;  // Zakończenie programu, zwrócenie wartości 0, co oznacza prawidłowe zakończenie programu
}
/*
Wyjaśnienia do kodu:

cin >> x; – Wczytuje kwotę podaną przez użytkownika w groszach (czyli liczba całkowita, np. 25000 oznacza 250 zł).
x / 50000 – Oblicza liczbę pełnych banknotów o nominale 500 zł (50000 groszy). Następnie reszta kwoty jest obliczana za pomocą x % 50000, co daje resztę po podzieleniu przez 50000.
x % 50000 – Oblicza resztę po podzieleniu kwoty przez 50000, co oznacza, ile groszy zostaje po "wydaniu" banknotu 500 zł.
Powtarzanie tego procesu dla innych nominałów (200 zł, 100 zł itd.) pozwala na wyświetlenie ilości banknotów i monet w różnych nominałach.
Program kończy się, wyświetlając, ile pełnych monet 1 grosza pozostało, a następnie zwraca wartość 0, co oznacza, że program zakończył się pomyślnie.
*/