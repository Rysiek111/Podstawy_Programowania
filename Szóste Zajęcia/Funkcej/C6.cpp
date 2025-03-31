/*
Napisz funkcje typu void wypisujaca dany tekst na ekranie okreslona liksc razy.
Parametrami funkcji sa: tekst - dany tekst(typu string), n ilosc powturzen.
*/
#include <iostream>

using namespace std;

void wypisywanie(string tekst,int powturzenia)
{
    for(int g=0;g<=powturzenia-1;g++)
        cout<<g<<"."<<tekst<<endl;
}

int main()
{
    string x;
    int n;
    cout<<"Podaj tekst:"<<endl;
    cin>>x;
    cout<<"Podaj ile razy ma sie powturzyc: ";
    cin>>n;
    wypisywanie(x,n);
    return 0;
}
