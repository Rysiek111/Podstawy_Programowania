#include <iostream>  // Dołączenie nagłówka do obsługi wejścia/wyjścia (cin, cout)

using namespace std;  // Używanie przestrzeni nazw 'std', aby nie trzeba było pisać 'std::' przed funkcjami (np. cout, cin)

int main() {
    int x, y;  // Deklaracja zmiennych x i y typu całkowitego

    // Inkrementacja postinkrementacyjna
    x = 1;  // Przypisanie wartości 1 do zmiennej x
    cout << "x=" << x << endl;  // Wyświetlenie wartości x
    cout << "W trakcie inkrementacji x=" << x++ << endl;  // Wyświetlenie wartości x przed inkrementacją (postinkrementacja)
    cout << "Po inkrementacji x=" << x << endl;  // Wyświetlenie wartości x po inkrementacji (x zostało zwiększone o 1)

    cout << endl;

    // Inkrementacja preinkrementacyjna
    x = 1;  // Ponowne przypisanie wartości 1 do zmiennej x
    cout << "x=" << x << endl;  // Wyświetlenie wartości x
    cout << "W trakcie inkrementacji x=" << ++x << endl;  // Wyświetlenie wartości x po inkrementacji (preinkrementacja)
    cout << "Po inkrementacji x=" << x << endl;  // Wyświetlenie wartości x po inkrementacji (x zostało zwiększone o 1)

    cout << endl;

    // Dekrementacja postdekrementacyjna
    y = 2;  // Przypisanie wartości 2 do zmiennej y
    cout << "y=" << y << endl;  // Wyświetlenie wartości y
    cout << "W trakcie dekrementacji y=" << y-- << endl;  // Wyświetlenie wartości y przed dekrementacją (postdekrementacja)
    cout << "Po dekrementacji y=" << y << endl;  // Wyświetlenie wartości y po dekrementacji (y zostało zmniejszone o 1)

    cout << endl;

    // Dekrementacja predekrementacyjna
    y = 2;  // Ponowne przypisanie wartości 2 do zmiennej y
    cout << "y=" << y << endl;  // Wyświetlenie wartości y
    cout << "W trakcie dekrementacji y=" << --y << endl;  // Wyświetlenie wartości y po dekrementacji (predekrementacja)
    cout << "Po dekrementacji y=" << y << endl;  // Wyświetlenie wartości y po dekrementacji (y zostało zmniejszone o 1)

    return 0;  // Zakończenie programu
}
/*
Wyjaśnienie działania programu:
Postinkrementacja (x++):

Wartość zmiennej x jest najpierw używana w wyrażeniu, a potem zwiększana o 1. W pierwszym przypadku x++ zwraca wartość 1, a dopiero potem x zostaje zwiększone do 2.
Preinkrementacja (++x):

Zmienna x jest najpierw zwiększana o 1, a potem ta zwiększona wartość jest używana. W drugim przypadku ++x zwiększa x do 2 przed jej użyciem w wyrażeniu.
Postdekrementacja (y--):

Wartość zmiennej y jest najpierw używana w wyrażeniu, a potem zmniejszana o 1. W pierwszym przypadku y-- zwraca wartość 2, a dopiero potem y zostaje zmniejszone do 1.
Predekrementacja (--y):

Zmienna y jest najpierw zmniejszana o 1, a potem ta zmniejszona wartość jest używana. W drugim przypadku --y zmniejsza y do 1 przed jej użyciem w wyrażeniu.
Wyniki:
Dla x++:

Wartość przed inkrementacją: 1
Wartość po inkrementacji: 2
Dla ++x:

Wartość przed inkrementacją: 1
Wartość po inkrementacji: 2
Dla y--:

Wartość przed dekrementacją: 2
Wartość po dekrementacji: 1
Dla --y:

Wartość przed dekrementacją: 2
Wartość po dekrementacji: 1
Kluczowe różnice:
Postinkrementacja (x++): Wartość zmiennej jest używana w wyrażeniu, a dopiero potem następuje inkrementacja.
Preinkrementacja (++x): Wartość zmiennej jest najpierw zwiększana, a potem używana w wyrażeniu.
Postdekrementacja (y--): Wartość zmiennej jest używana w wyrażeniu, a dopiero potem następuje dekrementacja.
Predekrementacja (--y): Wartość zmiennej jest najpierw zmniejszana, a potem używana w wyrażeniu.
*/