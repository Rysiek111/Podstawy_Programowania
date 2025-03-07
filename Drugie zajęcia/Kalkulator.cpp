#include <iostream>  // Dołączenie nagłówka do obsługi wejścia/wyjścia (cin, cout)
#include <cmath>     // Dołączenie nagłówka do funkcji matematycznych (np. pow)

using namespace std;  // Używanie przestrzeni nazw 'std', aby nie trzeba było pisać 'std::' przed funkcjami (np. cout, cin)

// Funkcja menu wyświetlająca dostępne opcje kalkulatora
void menu() {
    cout << "\n--- Kalkulator Matematyczny ---" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Potegowanie" << endl;
    cout << "6. Wyjscie" << endl;
    cout << "Wybierz opcje: ";
}

int main() {
    int wybor;  // Zmienna do przechowywania wyboru użytkownika
    double a, b;  // Zmienne do przechowywania dwóch liczb

    // Pętla do-while, która działa dopóki użytkownik nie wybierze opcji wyjścia (6)
    do {
        menu();  // Wywołanie funkcji menu
        cin >> wybor;  // Wczytanie wyboru użytkownika

        // Jeśli wybór jest poprawny (1 do 5), zapytaj użytkownika o dwie liczby
        if (wybor >= 1 && wybor <= 5) {
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;  // Wczytanie pierwszej liczby
            cout << "Podaj druga liczbe: ";
            cin >> b;  // Wczytanie drugiej liczby
        }

        // Instrukcja switch, która wykonuje odpowiednią operację na podstawie wyboru użytkownika
        switch (wybor) {
            case 1:  // Dodawanie
                cout << "Wynik: " << a + b << endl;
                break;
            case 2:  // Odejmowanie
                cout << "Wynik: " << a - b << endl;
                break;
            case 3:  // Mnożenie
                cout << "Wynik: " << a * b << endl;
                break;
            case 4:  // Dzielenie
                if (b != 0)  // Sprawdzamy, czy druga liczba nie jest zerem
                    cout << "Wynik: " << a / b << endl;  // Wykonaj dzielenie
                else
                    cout << "Blad: dzielenie przez zero!" << endl;  // Obsługuje przypadek dzielenia przez zero
                break;
            case 5:  // Potęgowanie
                cout << "Wynik: " << pow(a, b) << endl;  // Wykorzystanie funkcji 'pow' do obliczenia potęgi
                break;
            case 6:  // Zakończenie programu
                cout << "Zakonczono program." << endl;
                break;
            default:  // Jeśli wybór jest niepoprawny (nie mieści się w zakresie 1-6)
                cout << "Niepoprawny wybor, sprobuj ponownie." << endl;
        }
    } while (wybor != 6);  // Pętla powtarza się, aż użytkownik wybierze 6 (zakończenie)

    return 0;  // Zakończenie programu
}
