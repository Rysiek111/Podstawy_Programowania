#include <iostream>
#include <cmath>

using namespace std;

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
    int wybor;
    double a, b;

    do {
        menu();
        cin >> wybor;

        if (wybor >= 1 && wybor <= 5) {
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;
            cout << "Podaj druga liczbe: ";
            cin >> b;
        }

        switch (wybor) {
            case 1:
                cout << "Wynik: " << a + b << endl;
                break;
            case 2:
                cout << "Wynik: " << a - b << endl;
                break;
            case 3:
                cout << "Wynik: " << a * b << endl;
                break;
            case 4:
                if (b != 0)
                    cout << "Wynik: " << a / b << endl;
                else
                    cout << "Blad: dzielenie przez zero!" << endl;
                break;
            case 5:
                cout << "Wynik: " << pow(a, b) << endl;
                break;
            case 6:
                cout << "Zakonczono program." << endl;
                break;
            default:
                cout << "Niepoprawny wybor, sprobuj ponownie." << endl;
        }
    } while (wybor != 6);

    return 0;
}
