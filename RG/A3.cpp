#include <iostream>

using namespace std;

int main()
{
    int n, suma;
    double iloczyn;

    cout<<"Podaj ile razy mam się powtorzyc: ";
    cin>>n;

    suma=0;
    iloczyn=1;
    for(int i=1, j=n;i<=j;i++,j-=2){
            cout<<"i= "<<i<<", j="<<j<<endl;
            }
    return 0;
}
