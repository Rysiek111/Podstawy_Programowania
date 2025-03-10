/*
Oblicz n pierwszych wyrazów następującego ciągu:
a1=1
ai=(a(i-1)+3)/i
Wartość n zostaje podana uprzednio przez użytkownika.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Podaj ile razy mam się powtorzyc: ";
    cin>>n;
    double a=1;
    cout<<"a1 = "<<a<<endl;

    for(int i=2; i<=n; i++)
    {
        a=(a+3)/i;
        cout<<"a"<<i<<" = "<<a<<endl;
    }


    return 0;
}
