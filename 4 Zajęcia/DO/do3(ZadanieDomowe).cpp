/*
Zmodyfikować napisany wcześniej dowolny program obliczeniowy (np. liczący pierwiastki, równania kwadratowe) tak,
żeby na życzenie użytkownika komputer ponawiał obliczenia lub kończył program.
Do tego celu zastosuj pętlę do while.
Program powinien uwzględnić przypadkowe naciścięcie klawisza Caps Lock.
*/

#include <iostream>


using namespace std;

main()
{
    char dec;

    cout << "Ten program obliczy pole i obwod prostokata" << endl;

    do
    {
        double x, y;


        cout << "Podaj dlugosc pierwszego boku: ";
        cin >> x;
        cout << "Podaj dlugosc drugiego boku: ";
        cin >> y;

        cout << "Pole wynosi: " << x * y << endl;
        cout << "Obwod wynosi: " << 2 * (x + y) << endl;
        cout<<"Czy chcesz powtorzyc ? (T/N)"<<endl;
        cin>>dec;
    }
    while((dec!='N')&&(dec!='n'));

}

