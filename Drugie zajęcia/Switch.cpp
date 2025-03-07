#include <iostream>  // Dołączenie nagłówka, który pozwala na korzystanie z funkcji do wejścia/wyjścia (cin, cout)

using namespace std;  // Używanie przestrzeni nazw 'std', aby nie trzeba było pisać 'std::' przed funkcjami (np. cout, cin)

int main() {
    int x;  // Deklaracja zmiennej x typu 'int' (liczba całkowita)

    // Prośba o podanie oceny
    cout << "Podaj ocene: ";
    cin >> x;  // Wczytanie wartości oceny wprowadzonej przez użytkownika i zapisanie jej do zmiennej x

    // Instrukcja switch - sprawdza wartość zmiennej x i wykonuje odpowiednią akcję
    switch (x) {
        case 2:  // Jeśli x jest równe 2
            cout << "Ocena Niedostateczna";  // Wyświetla komunikat
            break;  // Kończy wykonanie switch i przechodzi do końca programu
        case 3:  // Jeśli x jest równe 3
            cout << "Ocena Dostateczna";  // Wyświetla komunikat
            break;  // Kończy wykonanie switch
        case 4:  // Jeśli x jest równe 4
            cout << "Ocena Dobra";  // Wyświetla komunikat
            break;  // Kończy wykonanie switch
        case 5:  // Jeśli x jest równe 5
            cout << "Ocena Bardzo dobra";  // Wyświetla komunikat
            break;  // Kończy wykonanie switch
        default:  // Jeśli x nie jest żadną z wartości powyżej
            cout << "Podales zla ocene";  // Wyświetla komunikat o błędzie
    }

    return 0;  // Zakończenie programu
}
/*
Wyjaśnienie działania programu:

Program prosi użytkownika o podanie oceny (zmiennej x).
Następnie używa instrukcji switch, która sprawdza wartość zmiennej x i wykonuje odpowiednią akcję w zależności od jej wartości:
Jeśli x jest równe 2, wyświetli "Ocena Niedostateczna".
Jeśli x jest równe 3, wyświetli "Ocena Dostateczna".
Jeśli x jest równe 4, wyświetli "Ocena Dobra".
Jeśli x jest równe 5, wyświetli "Ocena Bardzo dobra".
Jeśli wartość x nie pasuje do żadnego z wymienionych przypadków (np. 6, 7, itp.), wykona się blok default, który wyświetli komunikat "Podales zla ocene".
Program kończy działanie po wykonaniu odpowiedniego przypadku.
*/