#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

main()
{

    int n,m=0;
    cout<<"Podaj zakres: ";
    cin>>n;

    srand( time( NULL ) );
    int x,y=rand()%n+1;

    do
    {
        cout<<"Podaj liczbe:";
        cin>>x;
        m++;
        if(x<y)
            cout<<"Podana liczba jest za mala."<<endl;
        else if(x>y)
            cout<<"Podana liczba jest za duza."<<endl;
    }
    while(x!=y);
    cout<<"Gratulacje! Wygrales za: "<<m<<" razem!";

}
