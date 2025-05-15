#include <iostream>
using namespace std;
struct data
{
    int dzien,miesiac,rok;
};

struct osoba
{
    char imie[10],nazwisko[20];
    data dataur;
};
void wpisz(osoba& os)
{
    cout<<"Podaj dane osobowe:"<<endl;
    cout<<"Imie: ";
    cin>>os.imie;
    cout<<"Nazwisko: ";
    cin>>os.nazwisko;
    cout<<"Podaj date urodzenia:"<<endl;
    cout<<" Dzien: ";
    cin>>os.dataur.dzien;
    cout<<" Miesiac: ";
    cin>>os.dataur.miesiac;
    cout<<" Rok: ";
    cin>>os.dataur.rok;
}
void wypisz(osoba os)
{
    cout<<"Imie i Nazwisko: "<<os.imie<<" "<<os.nazwisko<<endl;
    cout<<"Data urodzenia: "<<os.dataur.dzien<<"."<<os.dataur.miesiac<<"."<<os.dataur.rok<<endl;
}
main()
{
    osoba o;
    wpisz(o);
    cout<<endl;
    wypisz(o);
}
