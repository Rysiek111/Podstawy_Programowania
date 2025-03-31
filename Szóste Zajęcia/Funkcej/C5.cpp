#include <iostream>

using namespace std;

void wizytowka(string imie,string nazwisko)
{
    cout<<"************************"<<endl;
    cout<<"*                      *"<<endl;
    cout<<"*    "<<imie<<"  "<<nazwisko<<"    *"<<endl;
    cout<<"*                      *"<<endl;
    cout<<"************************"<<endl;
}

int main()
{
    wizytowka("Imie","Nazwisko");
    cout<<"Jakas czesc kodu"<<endl;
    string im="Imie",na="Nazwisko";
    wizytowka(im,na);
    return 0;
}
