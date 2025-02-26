#include <iostream>

using namespace std;

int main() {
    int x;
    cout<<"Podaj wartość x: ";
    cin>>x;

    if(x>0)
       cout<<"Podałeś wartość dodatnią"<<endl;
    else
       cout<<"Podałeś wartość niedodatnią"<<endl;

    return 0;
}