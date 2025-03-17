#include <iostream>  // Biblioteka do obsługi wejścia i wyjścia

using namespace std; // Używanie przestrzeni nazw std, aby uniknąć pisania std:: przed cout i cin

int main()  // Funkcja main(), punkt wejścia do programu
{
    char dec;  // Zmienna przechowująca odpowiedź użytkownika (T/N)

    do  // Pętla do-while, która będzie się powtarzać, dopóki użytkownik nie zdecyduje, że chce zakończyć
    {
        cout << "Tu sa obliczenia." << endl;  // Komunikat informujący o obliczeniach
        cout << "Czy chcesz jeszcze raz ? (T/N)" << endl;  // Prośba o odpowiedź użytkownika, czy chce powtórzyć obliczenia
        cin >> dec;  // Wczytanie odpowiedzi użytkownika (T/N)
    }
    // Pętla powtarza się, dopóki użytkownik nie wprowadzi 'N' lub 'n' (oznaczające zakończenie)
    while ((dec != 'N') && (dec != 'n'));  // Warunek zakończenia pętli: jeśli użytkownik wybierze 'N' lub 'n', pętla się kończy

    return 0;  // Zakończenie programu
}
