#include <iostream>


using namespace std;

main()
{
    char dec;

    do
    {
        cout<<"Tu sa obliczenia."<<endl;
        cout<<"Czy chcesz jeszcze raz ? (T/N)"<<endl;
        cin>>dec;
    }
    while((dec!='N')&&(dec!='n'));

}
