/*
Oblicz n pierwszych wyrazów następującego ciągu (a=2*i+1).
Wartość n zostaje podana uprzednio przez użytkownika.
*/

#include <iostream>

using namespace std;

int main()
{
    int n,a;

    cout<<"Podaj ile razy mam się powtorzyc: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        a=2*i+1;
        cout<<"a"<<i<<"="<<a<<endl;
    }


    return 0;
}
