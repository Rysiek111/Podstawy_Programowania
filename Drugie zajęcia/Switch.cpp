#include <iostream>

using namespace std;

main()
{
    int x;

    cout<<"Podaj ocene: ";
    cin>>x;

    switch(x)
    {
        case 2:cout<<"Obena Niedostateczna";    break;
        case 3:cout<<"Obena Dostateczna";       break;
        case 4:cout<<"Obena Dobra";             break;
        case 5:cout<<"Obena Bardzodobra";       break;
        default:cout<<"Podales zla ocene";
    }
}
